import sys
import random

class Sort:

    heap = []
    size = -1

    def __init__(self):
        pass

    @staticmethod
    def contains_non_integers(array):
        """
        Checks if the input array contains non-integers.
        Args:
            array (list of int): The list to check for non-integer elements.
        Returns:
            bool: \"True\" if there are non-integers in the array, \"False\" otherwise.
        """
        for item in array:
            if not isinstance(item, int):
                return True
        return False

    @staticmethod
    def bubble_sort(array, order = "asc"):
        """
        Sorts an array of integers using the bubble sort algorithm. The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list of int): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
        
        if Sort.contains_non_integers(array):
            raise TypeError("The array contains a string.")
        
        for i in range(0, len(array)):
            swapped = False
            for j in range(0, len(array) - i - 1):
                if (order == "asc" and array[j] >= array[j + 1]) or \
                   (order == "dec" and array[j] <= array[j + 1]):
                    array[j], array[j + 1] = array[j + 1], array[j]
                    swapped = True
            if swapped == False:
                break
    
    @staticmethod
    def selection_sort(array, order = "asc"):
        """
        Sorts an array of integers using the selection sort algorithm. The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list of int): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
        
        if Sort.contains_non_integers(array):
            raise TypeError("The array contains a string.")
        
        for i in range(0, len(array)):
            min_max_num_index = i
            for j in range(i + 1, len(array)):
                if (order == "asc" and array[min_max_num_index] >= array[j]) or \
                   (order == "dec" and array[min_max_num_index] <= array[j]):
                    min_max_num_index = j
            array[i], array[min_max_num_index] = array[min_max_num_index], array[i]

    @staticmethod
    def insertion_sort(array, order = "asc"):
        """
        Sorts an array of integers using the insertion sort algorithm. The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list of int): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
        
        if Sort.contains_non_integers(array):
            raise TypeError("The array contains a string.")
        
        for i in range(1,len(array)):
            for j in range(i, 0, -1):
                if (order == "asc" and array[j] <= array[j - 1]) or \
                   (order == "dec" and array[j] >= array[j - 1]):
                    array[j - 1], array[j] = array[j], array[j - 1]

    @staticmethod
    def __merge(array, order, left, mid, right):

        left_arr = array[left : mid + 1]
        right_arr = array[mid + 1 : right + 1]
        i = j = 0

        while i < len(left_arr) and j < len(right_arr):
            if (order == "asc" and left_arr[i] <= right_arr[j]) or \
               (order == "dec" and left_arr[i] >= right_arr[j]):
                array[left] = left_arr[i]
                left += 1
                i += 1
            elif (order == "asc" and right_arr[j] < left_arr[i]) or \
                 (order == "dec" and right_arr[j] > left_arr[i]):
                array[left] = right_arr[j]
                left += 1
                j += 1

        while i < len(left_arr):
            array[left] = left_arr[i]
            left += 1
            i += 1

        while j < len(right_arr):
            array[left] = right_arr[j]
            left += 1
            j += 1

    @staticmethod
    def merge_sort(array, order = "asc", left = 0, right = None):
        """
        Sorts an array of integers using the merge sort algorithm. The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list of int): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        if right is None:
            right = len(array) - 1

            order = order.lower()
            if order != "asc" and order != "dec":
                raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
            
            if Sort.contains_non_integers(array):
                raise TypeError("The array contains a string.")
        
        mid = left + int((right - left)/2)
        if left < right:
            Sort.merge_sort(array, order, left, mid)
            Sort.merge_sort(array, order, mid + 1, right)
            Sort.__merge(array, order, left, mid, right)
    
    @staticmethod
    def __partition(array, order, left, right):

        i = left + 1
        j = right
        pivot = array[left]

        while i < j:
            if order == "asc":
                while pivot >= array[i] and i < right:
                    i += 1
                while pivot < array[j] and j > left:
                        j -= 1
            elif order == "dec":
                while pivot <= array[i] and i < right:
                    i += 1
                while pivot > array[j] and j > left:
                        j -= 1
            if i < j:
                array[i], array[j] = array[j], array[i]

        array[left], array[j] = array[j], array[left]
        return j

    @staticmethod
    def quick_sort(array, order = "asc", left = 0, right = None):
        """
        Sorts an array of integers using the quick sort algorithm. The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list of int): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        if right is None:
            right = len(array) - 1

            order = order.lower()
            if order != "asc" and order != "dec":
                raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
            
            if Sort.contains_non_integers(array):
                raise TypeError("The array contains a string.")
            
        if left < right:
            partition = Sort.__partition(array, order, left, right)
            Sort.quick_sort(array, order, left, partition - 1)
            Sort.quick_sort(array, order, partition + 1, right)

    @staticmethod
    def __left_child(index):
        return (index * 2) + 1
    
    @staticmethod
    def __right_child(index):
        return (index * 2) + 2

    @staticmethod
    def __heapify(array, order, index, skip_index):

        current = index
        left_child_index = Sort.__left_child(index)
        right_child_index = Sort.__right_child(index)

        if order == "asc":
            compare = lambda a, b: a > b
        else:
            compare = lambda a, b: a < b

        if (left_child_index < skip_index) and compare(array[left_child_index], array[current]):
            current = left_child_index

        if (right_child_index < skip_index) and compare(array[right_child_index], array[current]):
            current = right_child_index

        if current != index:
            array[index], array[current] = array[current], array[index]
            Sort.__heapify(array, order, current, skip_index)
    
    @staticmethod
    def heap_sort(array, order = "asc"):
        """
        Sorts an array of integers using the heap sort algorithm. The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list of int): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
        
        if Sort.contains_non_integers(array):
            raise TypeError("The array contains a string.")
        
        for index in range(len(array) - 1, -1, -1):
            Sort.__heapify(array, order, index, len(array))

        for index in range(len(array) - 1, -1, -1):
            array[0], array[index] = array[index], array[0]
            Sort.__heapify(array, order, 0, index)
            
def main():

    n = 100000
    INF = sys.maxsize
    NEG_INF = -sys.maxsize - 1

    arr = [random.randint(NEG_INF, INF) for _ in range(n)]

    Sort.heap_sort(arr, "asc")
    print(arr)

if __name__ == "__main__":
    main()