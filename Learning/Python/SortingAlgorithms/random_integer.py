import sys
import random

def generate_random_array(n, min_val, max_val):
    """Generates an array of n random integers within the specified range.

    Args:
        n(int): The number of random integers to generate.
        min_val(int): The minimum value for the random integers.
        max_val(int): The maximum value for the random integers.

    Returns:
        A list of \'n\' random integers.
    """
    random_array = [random.randint(min_val, max_val) for _ in range(n)]
    return random_array

# Example usage:
n = 1000

# Positive infinity
INF = sys.maxsize
NEG_INF = -sys.maxsize - 1

random_array = generate_random_array(n, NEG_INF, INF)
print(random_array)