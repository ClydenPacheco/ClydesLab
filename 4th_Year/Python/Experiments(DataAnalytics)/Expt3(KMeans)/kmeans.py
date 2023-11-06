import numpy as np
import matplotlib.pyplot as plt

# Define your data points
data = np.array([[2, 10],[2, 5],[8, 4],[5, 8],[7, 5],[6, 4],[1, 2],[4, 9]])

# Specify the number of clusters (K)
k = 3

# Initialize cluster centroids randomly
np.random.seed(0)
centroids = data[np.random.choice(data.shape[0], k, replace=False)]
#centroids = np.array([[2, 10], [5, 8], [1, 2]])
print(f'Initial cluster centroids: {centroids}')

# Initialize variables to track cluster assignments
old_assignments = np.zeros(data.shape[0])
assignments = np.zeros(data.shape[0])

# Perform K-means clustering
max_iterations = 100
for _ in range(max_iterations):
    # Assign each point to the nearest centroid
    for i, point in enumerate(data):
        distances = [np.linalg.norm(point - centroid) for centroid in centroids]
        assignments[i] = np.argmin(distances)

    # Update the centroids
    for cluster in range(k):
        centroids[cluster] = np.mean(data[assignments == cluster], axis=0)

    # Check for convergence
    if np.array_equal(old_assignments, assignments):
        break

    old_assignments = np.copy(assignments)

# Print cluster assignments
for i in range(len(data)):
    print(f'Data point {data[i]} is assigned to cluster {int(assignments[i])+1}')
