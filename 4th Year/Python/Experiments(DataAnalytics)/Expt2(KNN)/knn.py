import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score

# Load the dataset from 'fruits.csv'
df = pd.read_csv('fruits.csv')

# Define the feature columns (Width and Height)
X = df[['Width', 'Height']].values

# Define the target variable (Fruit)
y = df['Fruit'].values

# Split the dataset into a training set and a testing set
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Implement the K-Nearest Neighbors algorithm
def knn_predict(k, X_train, y_train, x):
    distances = [(i, ((x[0] - X_train[i][0])**2 + (x[1] - X_train[i][1])**2)**0.5) for i in range(len(X_train))]
    distances.sort(key=lambda x: x[1])
    k_nearest = [y_train[i] for i, _ in distances[:k]]
    return max(set(k_nearest), key=k_nearest.count)

# Input values from the user
width = float(input("Enter the width of the fruit: "))
height = float(input("Enter the height of the fruit: "))

k_value = 5  # You can adjust the value of k as needed

# Predict the class of the fruit
predicted_fruit = knn_predict(k_value, X_train, y_train, [width, height])
print(f"The given dimensions are likely that of a {predicted_fruit}.")