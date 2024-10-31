def merge(l, m, r, nums):
    left_arr = nums[l:m+1]
    right_arr = nums[m+1:r+1]
    i = j = 0
    while i < len(left_arr) and j < len(right_arr):
        if left_arr[i] <= right_arr [j]:
            nums[l] = left_arr[i]       
            l += 1
            i += 1
        elif right_arr[j] < left_arr[i]:
            nums[l] = right_arr[j]
            l += 1
            j += 1
    while j < len(right_arr):
        nums[l] = right_arr[j]
        l += 1
        j += 1
    while i < len(left_arr):
        nums[l] = left_arr[i]
        l += 1
        i += 1

def merge_sort(l, r, nums):
    if l < r:
        m = l + int((r - l)/2)
        merge_sort(l, m, nums)
        merge_sort(m + 1, r, nums)
        merge(l, m, r, nums)

def longest_squre_streak(nums):
    lss = -1
    lss_arr = []
    merge_sort(0, len(nums) - 1, nums)
    if len(nums) == 0 or len(nums) == 1:
        return -1
    else:
        for i in range(len(nums)):
            temp = nums[i]
            lss_arr.append(nums[i])
            for j in range(i + 1,len(nums)):
                if (temp ** 2) == nums[j]:
                    print(f"temp = {temp}, tempsq = {temp ** 2}, nums[j] = {nums[j]}")
                    lss_arr.append(nums[j])
                    temp = nums[j]
            new_lss = len(lss_arr)
            if new_lss > lss:
                lss = new_lss
            lss_arr = []
        if lss == 1:
            return -1
        else:
            return lss

def main():
    nums = [2,3,5,6,7]
    lss = longest_squre_streak(nums)
    print("Longest square streak = ", lss)

if __name__ == "__main__":
    main()