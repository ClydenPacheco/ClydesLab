class Sort:

    def __init__(self):
        pass

    @staticmethod
    def __contains_non_real_numbers(array):
        for item in array:
            if not isinstance(item, (int, float)):
                return True
        return False
    
    def __contains_non_integers(array):
        for item in array:
            if not isinstance(item, int):
                return True
        return False
    
    def __contains_negative_numbers(array):
        for item in array:
            if item < 0:
                return True
        return False
    
    def __exceedes_range(array, lower_bound, upper_boud):
        for item in array:
            if item < lower_bound or item > upper_boud:
                return True
        return False
    
    def __parameter_validity_check(array, order):

        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
        
        if Sort.__contains_non_real_numbers(array):
            raise TypeError("The array contains an invalid type.")

    @staticmethod
    def bubble_sort(array: list, order: str = "asc"):
        """
        Sorts an list of real numbers using the bubble sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)
        
        for i in range(0, len(array)):
            swapped = False
            for j in range(0, len(array) - i - 1):
                if (order == "asc" and array[j] > array[j + 1]) or \
                   (order == "dec" and array[j] < array[j + 1]):
                    array[j], array[j + 1] = array[j + 1], array[j]
                    swapped = True
            if swapped == False:
                break
    
    @staticmethod
    def selection_sort(array: list, order: str = "asc"):
        """
        Sorts an list of real numbers using the selection sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)
        
        for i in range(0, len(array)):
            min_max_num_index = i
            for j in range(i + 1, len(array)):
                if (order == "asc" and array[min_max_num_index] > array[j]) or \
                   (order == "dec" and array[min_max_num_index] < array[j]):
                    min_max_num_index = j
            array[i], array[min_max_num_index] = array[min_max_num_index], array[i]

    @staticmethod
    def insertion_sort(array: list, order: str = "asc"):
        """
        Sorts an list of real numbers using the insertion sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)
        
        for i in range(1,len(array)):
            for j in range(i, 0, -1):
                if (order == "asc" and array[j] < array[j - 1]) or \
                   (order == "dec" and array[j] > array[j - 1]):
                    array[j - 1], array[j] = array[j], array[j - 1]

    @staticmethod
    def binary_insertion_sort(array, order="asc"):
        """
        Sorts a list of real numbers using the binary insertion sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """
        order = order.lower()
        Sort.__parameter_validity_check(array, order)

        if order == "asc":
            compare = lambda a, b: a < b
        else:
            compare = lambda a, b: a > b

        for i in range(1, len(array)):

            value = array[i]
            left, right = 0, i - 1

            while left <= right:
                mid = (left + right) // 2
                if compare(array[mid], value):
                    left = mid + 1
                else:
                    right = mid - 1
            j = left

            for k in range(i, j, -1):
                array[k] = array[k - 1]
                
            array[j] = value

    @staticmethod
    def shell_sort(array: list, order: str = "asc"):
        """
        Sorts an list of real numbers using the shell sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)

        gap = len(array) // 2
        while gap > 0:
            j = gap
            while j < len(array):
                i = j - gap
                while i >= 0:
                    if (order == "asc" and array[i + gap] > array[i]) or \
                       (order == "dec" and array[i + gap] < array[i]): break
                    else: array[i + gap], array[i] = array[i], array[i + gap]
                    i = i - gap
                j += 1
            gap = gap // 2

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
    def quick_sort(array: list, order: str = "asc", left: int = 0, right: int = None):
        """
        Sorts an list of real numbers using the quick sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        if right is None:
            right = len(array) - 1

            order = order.lower()
            Sort.__parameter_validity_check(array, order)
            
        if left < right:
            partition = Sort.__partition(array, order, left, right)
            Sort.quick_sort(array, order, left, partition - 1)
            Sort.quick_sort(array, order, partition + 1, right)

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
    def merge_sort(array: list, order: str = "asc", left: int = 0, right: int = None):
        """
        Sorts an list of real numbers using the merge sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        if right is None:
            right = len(array) - 1

            order = order.lower()
            Sort.__parameter_validity_check(array, order)
        
        mid = left + int((right - left)/2)
        if left < right:
            Sort.merge_sort(array, order, left, mid)
            Sort.merge_sort(array, order, mid + 1, right)
            Sort.__merge(array, order, left, mid, right)

    @staticmethod
    def __calculate_min_run(size):
        run = 0
        while size >= 32:
            run |= size & 1
            size >>= 1
        return size + run
    
    @staticmethod
    def __find_run(array, start, n):

        end = start + 1
        if end == n:
            return end
        
        if array[end] >= array[start]:
            while end < n and array[end] >= array[end - 1]:
                end += 1

        else:
            while end < n and array[end] < array[end - 1]:
                end += 1
            array[start:end] = reversed(array[start:end])
            
        return end
    
    @staticmethod
    def __binary_insertion_sort(array, left, right):

        for i in range(left + 1, right + 1):
            key = array[i]
            low, high = left, i

            while low < high:
                mid = (low + high) // 2
                if array[mid] > key:
                    high = mid
                else:
                    low = mid + 1

            for j in range(i, low, -1):
                array[j] = array[j - 1]

            array[low] = key

    @staticmethod
    def __merge2(array, left, mid, right):

        left_array = array[left:mid + 1]
        right_array = array[mid + 1:right + 1]

        i = j = 0
        k = left

        while i < len(left_array) and j < len(right_array):
            if left_array[i] <= right_array[j]:
                array[k] = left_array[i]
                i += 1
            else:
                array[k] = right_array[j]
                j += 1
            k += 1

        while i < len(left_array):
            array[k] = left_array[i]
            i += 1
            k += 1

        while j < len(right_array):
            array[k] = right_array[j]
            j += 1
            k += 1

    @staticmethod
    def tim_sort(array: list, order: str = "asc"):
        """
        Sorts an list of real numbers using the tim sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)

        n = len(array)
        runs = []
        min_run = Sort.__calculate_min_run(n)

        i = 0
        while i < n:
            run_end = Sort.__find_run(array, i, n)
            if run_end - i < min_run:
                end = min(i + min_run - 1, n - 1)
                Sort.__binary_insertion_sort(array, i, end)
                run_end = end + 1
            runs.append((i, run_end - 1))
            i = run_end
        
        size = min_run
        while size < n:
            for left in range(0, n, size * 2):
                mid = min(n - 1, left + size - 1)
                right = min(n - 1, left + 2 * size - 1)
                if mid < right:
                    Sort.__merge2(array, left, mid, right)
            size *= 2

    @staticmethod
    def __left_child(index):
        return (index * 2) + 1
    
    @staticmethod
    def __right_child(index):
        return (index * 2) + 2
    
    @staticmethod
    def __is_leaf(index, skip_index):
        if (index >= (skip_index // 2)) and (index <= skip_index):
            return True
        return False

    @staticmethod
    def __heapify(array, order, index, skip_index):

        if not Sort.__is_leaf(index, skip_index):
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
    def heap_sort(array: list, order: str = "asc"):
        """
        Sorts an list of real numbers using the heap sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)
        
        for index in range(len(array) - 1, -1, -1):
            Sort.__heapify(array, order, index, len(array))

        for index in range(len(array) - 1, -1, -1):
            array[0], array[index] = array[index], array[0]
            Sort.__heapify(array, order, 0, index)
    
    def counting_sort(array, order = "asc", exponent = 1):
        """
        Sorts an list of integers using the counting sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        Sort.__parameter_validity_check(array, order)

        size = len(array)
        output = [0] * (size)
        count = [0] * (10)

        for index in range(0, size):
            count_index = array[index] // exponent
            count[count_index % 10] += 1

        if order == "asc":
            for i in range(1, 10):
                count[i] += count[i - 1]
        else:
            for i in range(8, -1, -1):
                count[i] += count[i + 1]

        for index in range(size - 1, -1, -1):
            count_index = array[index] // exponent
            output[count[count_index % 10] - 1] = array[index]
            count[count_index % 10] -= 1

        for index in range(0, len(array)):
            array[index] = output[index]
    
    def radix_sort(array, order = "asc"):
        """
        Sorts an list of positive integers using the radix sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """

        order = order.lower()
        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")
        
        if Sort.__contains_non_integers(array):
            raise TypeError("The array contains an invalid type.")
        
        if Sort.__contains_negative_numbers(array):
            raise ValueError("The array contains negative number(s).")

        max_element = max(array)
        exponent = 1

        while max_element // exponent >= 1:
            Sort.counting_sort(array, order, exponent)
            exponent *= 10
    
    @staticmethod
    def bucket_sort(array: list, order: str = "asc"):
        """
        Sorts an list of floating point values between 0 and 1 using the radix sort algorithm.\n
        The sort is in-place, i.e., the list itself is modified.
        Args:
            array (list): The array of integers to be sorted.
            order (str): Specifies the sorting order.\n 
                        Use "asc" for ascending order or "dec" for descending order.
        """
        
        order = order.lower()
        if order != "asc" and order != "dec":
            raise ValueError("Invalid order value, \"asc\" or \"dec\" was expected.")

        if Sort.__exceedes_range(array, 0, 1):
            raise ValueError("A list element exceeded the range [0,1]")
        
        size = len(array)
        buckets = [[] for _ in range(size)]
        
        for item in array:
            index = int(item * size)
            if order == "asc": buckets[index].append(item)
            else: buckets[len(array) - index - 1].append(item)

        for bucket in buckets:
            Sort.insertion_sort(bucket, order)

        index = 0
        for bucket in buckets:
            for item in bucket:
                array[index] = item
                index += 1
            
def main():

    # arr = [1,3,3.5,4,3,4.7]
    arr = [4,3,6,16,8,2]
    # arr = [0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434]
    Sort.binary_insertion_sort(arr, "asc")
    print(arr)

if __name__ == "__main__":
    main()