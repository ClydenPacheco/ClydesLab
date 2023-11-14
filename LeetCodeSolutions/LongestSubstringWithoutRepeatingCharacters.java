/*Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.*/

import java.util.Vector;
class Solution {
    public int lengthOfLongestSubstring(String s) {
        Vector <Character> c = new Vector<>();
        int count = 0;
        int max = 0;
        for(int i=0;i<s.length();i++){
            if(c.indexOf(s.charAt(i)) == -1){
                c.add(s.charAt(i));
                count = c.size();
            }
            else{
                while(c.get(0) != s.charAt(i)){
                    c.remove(0);
                }
                c.remove(0);
                c.add(s.charAt(i));
                count = c.size();
            }
            if(count>max)
                max = count;
        }
        return max;
    }
}
