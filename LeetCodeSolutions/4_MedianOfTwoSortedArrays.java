/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

Constraints:
nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106*/

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        if(nums1.length > nums2.length){
            int[] a;
            a = nums1;
            nums1 = nums2;
            nums2 = a;
        }
        int total = nums1.length + nums2.length + 1;
        int low = 0;
        int high = nums1.length;
        while(low <= high){
            int mid1 = (low + high)/2;
            int mid2 = total/2 - mid1;
            int l1 = (mid1 == 0)?Integer.MIN_VALUE:nums1[mid1-1];
            int l2 = (mid2 == 0)?Integer.MIN_VALUE:nums2[mid2-1];
            int r1 = (mid1 == nums1.length)?Integer.MAX_VALUE:nums1[mid1];
            int r2 = (mid2 == nums2.length)?Integer.MAX_VALUE:nums2[mid2];
            if(l1<=r2 && l2<=r1){
                if((nums1.length + nums2.length)%2 == 0)
                    return ((double) (Math.max(l1, l2)+Math.min(r1, r2))/2);
                else
                    return ((double) Math.max(l1, l2));
            }
            else if(l1>r2)
                high = mid1 - 1;
            else
                low = mid1 + 1;
        }
        return 0;
    }
}
