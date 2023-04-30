# CS 4375: Sanjana Jadhav

- **Technical Tools and Languages:** C++, R **(ggplot2, caret, e1071, tree)**, Python **(pandas, numpy, sklearn, Seaborn, Matplotlib, Tensorflow)**
- **Statistics/Machine Learning:** linear/logistic regression, naive bayes, kNN regression/classification, decision trees regression/classification, kMeans clustering, hierarchical clustering, pca/lda dimensionality reduction, neural networks, sequential models, rnn/cnn models, transfer learning, inductive learning, feature selection, svm, ensemble methods, reinforcement learning, markov models
- **Soft Skills:** communication, time & project management, leadership, teamwork, analytical thinking, adaptability

## HW 1: Overview of ML

Check out my short introduction to machine learning [here!](Overview_of_ML.pdf)

## HW 2: C++ Data Exploration

This program uses C++ functions to find the sum, mean, median, range, covariance, and correlation of two vectors. The purpose of this assignment is to build functions from scratch (and dicuss the significance) instead of using the inbuilt functions in R.

- [code](C++_Data_Exploration/main.cpp), [report](C++_Data_Exploration/C++_Data_Exploration_Report.pdf), & [dataset](C++_Data_Exploration/Boston.csv)

## HW 3: Linear Models in R

For this assignment, I worked with Sovanna Ramirez to create Linear Regression, Logistic Regression & Naive Bayes models in R and analyze their performances.

Specifically, I worked on the Classification part of this assignemnt and built the Logistic Regression model and the Naive Bayes model. Firstly, I imported and preprocessed the data, and then conducted basic data exploration techniques to comprehend its underlying structure. Next, I divided the data into training and testing sets and visualized its distribution. Subsequently, I created both logistic regression and naive Bayes models to understand the impact of various predictors on adult income, and used these models to predict the outcome on the test data. Finally, I evaluated the results using different metrics to gain insights into the performance of the models.

- linear regression: [report](Linear_Models/Regression.pdf), [code](Linear_Models/Regression.Rmd), & [dataset](Linear_Models/diamonds.csv) <br>
- classification (logistic regression & naive bayes: [report](Linear_Models/Classification.pdf), [code](Linear_Models/Classification.Rmd), & [dataset](Linear_Models/adult.csv)

## HW 4: C++ Algorithms from Scratch

For this assignment, I worked with Sovanna Ramirez to create Logistic Regression & Naive Bayes models in C++ from scratch.

Specifically, I worked on the Logistic Regression part of this assignment. The program reads a CSV file and performs logistic regression to predict who survived the Titanic, based on sex. The sigmoid function is used to calculate the probability of an outcome, and matrix multiplication is used to calculate the error and update the weights. The transpose function is used to transpose the matrix, and the add function is used to add vectors. The weights are updated by multiplying the learning rate by the transposed data matrix and the error. The code also includes a function to predict probability values based on the test data matrix and weights. This code uses various C++ libraries, including fstream, string, vector, sstream, iostream, cmath, algorithm, and chrono.

- linear regression: [code](C++_Algorithms_from_Scratch/Logistic_Regression/main.cpp)
- naive bayes: [code](C++_Algorithms_from_Scratch/Naive_Bayes/main.cpp)
- dataset: [titanic](C++_Algorithms_from_Scratch/titanic_project.csv)
- [report](C++_Algorithms_from_Scratch/ML_Algorithms_from_Scratch.pdf)

## HW 5: Similarity & Ensemble (Group Project)

### my work:

For this assignment, I worked on creating a linear regression model, a kNN regression model & a decision tree regression model in R. The aim was to analyze the impact of various predictors on CO2 emissions and evaluate the performance of the three models.

**Part 1:** I constructed one linear regression model with a single predictor and two linear regression models with multiple predictors, and assessed them using metrics such as coefficients, RSE, R-squared, F-statistic, and p-values. Additionally, I plotted the residuals to gain further insights.

**Part 2:** I developed two kNN models, one using unscaled data and the other using scaled data, and utilized a scatter plot of correlation and MSE values to identify the optimal k-value for building the third kNN model. All three models were assessed using metrics. Only a few select predictors were utilized for this code.

**Part 3:** The "tree" function from the "tree" library is used to create the model, and the "predict" function is used to make predictions on a test dataset. The model is then pruned using the "prune.tree" function. The correlation and root mean squared error (RMSE) are calculated to evaluate the model's performance. A Random Forest model is also built using the "randomForest" function from the "randomForest" library. The RMSE is calculated for the Random Forest model as well. The code generates visualizations of the Decision Tree models and the Random Forest model's performance.

- linear regression, kNN regression, decision trees regression: [code](Similarity_&_Ensemble/Part_1_Regression/Regression.Rmd), [report](Similarity_&_Ensemble/Part_1_Regression/Regression.pdf), & [dataset](Similarity_&_Ensemble/Part_1_Regression/Fuel_Consumption_2000-2022.csv)

### other members:

- logistic regression, kNN classification, decision trees classification: [code](Similarity_&_Ensemble/Part_2_Classification/Classification.rmd), [report](Similarity_&_Ensemble/Part_2_Classification/Classification.pdf), & [dataset](Similarity_&_Ensemble/Part_2_Classification/dataset.csv)
- kMeans clustering & hierarchical clustering: [code](Similarity_&_Ensemble/Part_3_Clustering/Clustering.Rmd), [report](Similarity_&_Ensemble/Part_3_Clustering/Clustering.pdf), & [dataset](Similarity_&_Ensemble/Part_3_Clustering/dataset.csv)
- pca & lda dimensionality reduction: [code](Similarity_&_Ensemble/Part_4_Dimensionality_Reduction/Dimensionality_Reduction.Rmd), [report](Similarity_&_Ensemble/Part_4_Dimensionality_Reduction/Dimensonality_Reduction.pdf), & [dataset](Similarity_&_Ensemble/Part_4_Dimensionality_Reduction/Fuel_Consumption_2000-2022.csv)
- narrative about kNN, decision trees, clustering methods, pca, & lda: [report](Similarity_&_Ensemble/Part_5_Narrative/Narrative/Narrative.pdf)

## HW 6: ML with sklearn

This assignment serves as an introduction to Python and sklearn. The "Auto" csv file was imported using the pandas library for data exploration. NA values were handled, a column was modified, and the distribution of the target column was visualized using Seaborn.

**Part 1:** I trained a logistic regression model on the training data using the sklearn library in Python. The trained model is then used to predict the target values for the test data, and the results are evaluated using a confusion matrix and a classification report.

**Part 2:** I trained a decision tree classifier model using the **DecisionTreeClassifier()** function and fitting it to the given training data. The trained model is then used to predict the target values for the test data, and the results are evaluated using a confusion matrix and a classification report.

**Part 3:** I trained two neural network models on a dataset, using the **MLPClassifier** from the sklearn library. First, the data is preprocessed by scaling it using StandardScaler. The first model uses the lbfgs solver and the second model uses the sgd solver. After fitting the models to the training data, the models make predictions on the test data and the confusion matrix and classification report are printed for each model.

- logistic regression, decision trees, neural networks: [code](ML_with_sklearn/ml_sklearn.ipynb), [report](ML_with_sklearn/ml_sklearn.pdf), & [dataset](ML_with_sklearn/Auto.csv)

## HW 7: Image Classification

This assignment utilizes the **Card Image Dataset** on Kaggle to showcase image classification using a sequential model, CNN model, and a pre-trained model. I utilized the **Tensorflow** library to import both the training and testing datasets and employed **Matplotlib** to plot the distribution of the classes as well as a sample of the training data.
I developed a Sequential model and a CNN model, and plotted their accuracy for each epoch to analyze their performance. Furthermore, I employed the MobileNet V2 model to evaluate transfer learning.

- sequential model, convolutional neural network model, & pre-trained model: [code](Image_Classification/image_classification.ipynb), [report](Image_Classification/image_classification.pdf), & [dataset](Image_Classification/data)

## Summary

The past semester spent taking this class has been amazing. I have acquired proficiency in two new programming languages: R & Python. For years, I wanted to get into Machine Learning, but didn't know where to begin since I lacked knowledge of Python, which is a prerequisite for most online learning resources.This class has taught me numerous algorithms, primarily regression, classification, clustering, and more. I am so elated that I discovered a new area in computer science that has piqued my interest and allows me to apply my passion for mathematics.

**Future Plans:** Currently, I am looking forward to revisiting my ASL translator project and independently building the CNN model. Additionally, next semester I am enrolled in Human Language Technologies, which is a continuation of Machine Learning and places more emphasis on Natural Language Processing (NLP). I am excited to continue my learning journey and expand my knowledge in machine learning. This field has captured my interest, and I am eagerly anticipating more career opportunities where I can showcase the skills I have acquired in this class.

I am deeply grateful to **Professor Mazidi** for her exceptional teaching. She has helped me begin my Machine Learning journey, and I appreciate everything she has done for me.
