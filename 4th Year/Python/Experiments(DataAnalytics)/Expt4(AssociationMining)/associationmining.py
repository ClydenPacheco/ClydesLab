from itertools import combinations
from collections import defaultdict

# Provided dataset
dataset = [
    "1,milk,egg,bread,butter",
    "2,milk,butter,egg,ketchup",
    "3,bread,butter,ketchup",
    "4,milk,bread,butter",
    "5,bread,butter,cookies",
    "6,milk,bread,butter,cookies",
    "7,milk,cookies",
    "8,milk,bread,butter",
    "9,bread,butter,egg,cookies",
    "10,milk,butter,bread",
    "11,milk,bread,butter",
    "12,milk,bread,cookies,ketchup"
]

# Function to generate n-item sets and their frequency
def generate_n_item_sets(data, n, min_support):
    item_frequency = defaultdict(int)
    
    # Count frequency of each item
    for transaction in data:
        items = transaction.split(',')[1:]
        for item in items:
            item_frequency[item] += 1
    
    # Generate Frequent (n-1)-item sets
    frequent_n_minus_1_item_sets = {
        itemset: frequency for itemset, frequency in item_frequency.items() if frequency >= min_support
    }
    
    # Generate combinations of size n from frequent (n-1)-item sets
    combinations_n_item_sets = list(combinations(frequent_n_minus_1_item_sets.keys(), n))

    # Dictionary to store frequency of n-item sets
    itemset_n_frequency = defaultdict(int)

    # Count frequency of n-item sets
    for transaction in data:
        items = transaction.split(',')[1:]
        for itemset in combinations_n_item_sets:
            if set(itemset).issubset(set(items)):
                itemset_n_frequency[itemset] += 1
    
    # Filter frequent n-item sets based on minimum support
    frequent_n_item_sets = {
        itemset: frequency for itemset, frequency in itemset_n_frequency.items() if frequency >= min_support
    }
    
    return frequent_n_item_sets

# Function to generate non-empty subsets from a given itemset
def generate_non_empty_subsets(itemset):
    subsets = []
    for i in range(1, len(itemset)):
        subsets.extend(combinations(itemset, i))
    return subsets

# Function to calculate confidence for association rules
def calculate_confidence(antecedent, consequent, dataset):
    antecedent_support = sum(1 for transaction in dataset if set(antecedent).issubset(transaction.split(',')[1:])) / len(dataset)
    rule_support = sum(1 for transaction in dataset if set(antecedent + consequent).issubset(transaction.split(',')[1:])) / len(dataset)
    confidence = rule_support / antecedent_support if antecedent_support != 0 else 0
    return confidence

# Calculate minimum support (33% of total transactions)
min_support = len(dataset) * 0.33

# Initialize n to 1 for starting with 1-item sets
n = 1
frequent_n_item_sets = {}

# Generate and print Frequent n-item sets until it has only 1 row
while True:
    frequent_n_item_sets = generate_n_item_sets(dataset, n, min_support)
    print(f"Frequent {n}-item sets with frequency above {min_support}:")
    print("{:<35} {:<10}".format(f"{n}-item set", "Frequency"))
    for itemset, frequency in frequent_n_item_sets.items():
        itemset_str = ', '.join(itemset)
        print("{:<35} {:<10}".format(f"({itemset_str})", frequency))
    
    # Check if there's only 1 row in the frequent n-item set
    if len(frequent_n_item_sets) == 1:
        print("\nStopping as the Frequent n-item set has only 1 row.")
        break
    
    n += 1

# Set I
for i in frequent_n_item_sets:
  print(i)
set_I = i

# Generate non-empty subsets of set I
non_empty_subsets = generate_non_empty_subsets(set_I)

# Filter subsets that appear at least once in the dataset
appearing_subsets = [subset for subset in non_empty_subsets if any(set(subset).issubset(transaction.split(',')[1:]) for transaction in dataset)]

# Generate association rules and calculate confidence
print("\nAssociation Rules and Confidence:")
for subset in appearing_subsets:
    antecedent = subset
    consequent = tuple(item for item in set_I if item not in subset)
    
    confidence = calculate_confidence(antecedent, consequent, dataset)
    
    print(f"{antecedent} -> {consequent}")
    print(f"Confidence: {confidence * 100:.2f}% - {'Valid' if confidence >= 0.6 else 'Not valid'}\n")
