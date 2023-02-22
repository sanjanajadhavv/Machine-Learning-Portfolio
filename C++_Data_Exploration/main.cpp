//
//  main.cpp
//  1_ML
//  Created by Sanjana Jadhav on 1/28/23.
//  This program calcualates the sum, mean, median, range, covariance, and correlation of two vectors
//

#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// function to find the sum
// add all the values in the vector and return it
double sum(vector<double> v)
{
    double sumAns = 0;
    for (double x : v)
    {
        sumAns += x;
    }

    return sumAns;
}

// function to find the mean
// get the sum and divide by the number of records
double mean(double sum, int size)
{
    return (double)(sum / size);
}

// function for the median
// sort the vector
double median(vector<double> v)
{
    sort(v.begin(), v.end());
    int median = v.size() / 2;

    // if the median is an even number, average the two middle numbers
    if (median % 2 == 0)
    {
        double val1 = v.at(median - 1);
        double val2 = v.at(median);
        return (double)((val1 + val2) / 2);
    }
    else // if odd, then return the middle element
    {
        return v.at(median);
    }
}

// function for range
// sort the vector
vector<double> range(vector<double> v)
{
    sort(v.begin(), v.end());
    vector <double> result(2);
    result.at(0) = v.at(0);
    result.at(1) = v.at(v.size()-1);
    return result;
}

// function to print stats
void print_stats(vector<double> v, int size)
{
    double sumAns = sum(v);
    cout << "SUM: " << sumAns << endl;
    cout << "MEAN: " << mean(sumAns, size) << endl;
    cout << "MEDIAN: " << median(v) << endl;
    vector <double> result = range(v);
    cout << "RANGE: [" << result.at(0) << ", " << result.at(1) << "]" << endl;
}

// function to find the covariance
double covar(vector<double> x, vector<double> y, int size)
{
    double val = 0;
    double x_sum = sum(x);
    double y_sum = sum(y);
    double x_mean = mean(x_sum, size);
    double y_mean = mean(y_sum, size);

    // sum them up
    for (int i = 0; i < size; i++)
    {
        val += ((x.at(i) - x_mean) * (y.at(i) - y_mean));
    }

    // formula from pg. 74
    return (double)(val / (size - 1));
}

// function for correlation
// Standard Deviation Equation Reference: https://www.scribbr.com/statistics/standard-deviation/
double cor(vector<double> x, vector<double> y, int size)
{
    double val_x = 0;
    double val_y = 0;
    double x_sum = sum(x);
    double y_sum = sum(y);
    double x_mean = mean(x_sum, size);
    double y_mean = mean(y_sum, size);
    double currentVal = 0;

    // for first vector
    for (int i = 0; i < size; i++)
    {
        currentVal = x.at(i) - x_mean;
        val_x += pow(currentVal, 2);
    }

    // vector one's standard deviation
    double x_sd = sqrt((double)(val_x / size));

    // for second vector
    for (int i = 0; i < size; i++)
    {
        currentVal = y.at(i) - y_mean;
        val_y += pow(currentVal, 2);
    }

    // vector two's standard deviation
    double y_sd = sqrt((double)(val_y / size));

    // calculate covariance
    double covariance = covar(x, y, size);

    // formula from pg. 74
    return (double)(covariance / (x_sd * y_sd));
}

// main function
int main(int argc, const char *argv[])
{
    ifstream inFile;
    string line;
    string current_rm, current_medv;
    const int MAX_LEN = 1000;
    vector<double> rm(MAX_LEN);
    vector<double> medv(MAX_LEN);

    cout << "Opening Boston.csv file" << endl;

    // open file
    inFile.open("Boston.csv");

    // print error
    if (!inFile.is_open())
    {
        cout << "Error in opening Boston.csv" << endl;
        return 1;
    }

    // read first line
    cout << "Reading Line 1" << endl;
    getline(inFile, line);

    // print heading
    cout << "heading: " << line << endl;

    int numObservations = 0;

    // read the rest of the csv file
    while (inFile.good())
    {
        getline(inFile, current_rm, ',');
        getline(inFile, current_medv, '\n');

        rm.at(numObservations) = stof(current_rm);
        medv.at(numObservations) = stof(current_medv);

        numObservations++;
    }

    // remove extra indexes
    rm.resize(numObservations);
    medv.resize(numObservations);

    cout << "New length: " << rm.size() << endl;
    cout << "Closing Boston.csv file" << endl;
    inFile.close();

    // number of records
    cout << "Number of Records: " << numObservations << endl;

    // sum, mean, median and range
    cout << "\nSTATS for rm:" << endl;
    print_stats(rm, rm.size());
    cout << "\nSTATS for medv:" << endl;
    print_stats(medv, rm.size());

    // covariance and correlation
    cout << "\nCOVARIANCE = " << covar(rm, medv, rm.size()) << endl;
    cout << "\nCORRELATION = " << cor(rm, medv, rm.size()) << endl;
    cout << "\nProgram Terminated.";

    return 0;
}
