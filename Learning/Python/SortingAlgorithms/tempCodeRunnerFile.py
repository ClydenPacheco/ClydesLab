for item in array:
            index = int(item * size)
            buckets[index].append(item)

        for bucket in buckets:
            Sort.insertion_sort(bucket)