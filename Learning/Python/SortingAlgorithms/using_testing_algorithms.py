import sys
import random
import time
from sort import Sort

def main():

    n = 1000000
    INF = sys.maxsize
    NEG_INF = -sys.maxsize - 1

    all_integer_array = [random.randint(NEG_INF, INF) for _ in range(n)]
    positive_integer_array = [random.randint(0, INF) for _ in range(n)]
    _0_to_1_array = [random.uniform(0,1) for _ in range(n)]
    # arr = [random.uniform(0,1) for _ in range(n)]
    # arr = [15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0]
    # arr = [1,3,3.5,4,3,4.7]
    # arr = [4,3,6,16,8,2]
    # arr = [0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434]

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.bubble_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Bubble sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.selection_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Selection sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.insertion_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Insertion sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.shell_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Shell sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.quick_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Quick sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.merge_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Merge sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.tim_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Tim sort: {time_taken} seconds")

    start_time = time.time()
    arr = all_integer_array.copy()
    Sort.heap_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Heap sort: {time_taken} seconds")

    start_time = time.time()
    arr = positive_integer_array.copy()
    Sort.radix_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Radix sort: {time_taken} seconds")

    start_time = time.time()
    arr = _0_to_1_array.copy()
    Sort.bucket_sort(arr)
    end_time = time.time()
    time_taken = end_time - start_time
    print(f"Bucket sort: {time_taken} seconds")

if __name__ == "__main__":
    main()