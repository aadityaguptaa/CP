/*
Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
Example 3:

Input: s = "a"
Output: "a"
Example 4:

Input: s = "ac"
Output: "a"
*/

/*
In fact, we could solve it in O(n^2) time using only constant space.

We observe that a palindrome mirrors around its center. Therefore, a palindrome can be expanded from its center, and there are only 2n−1 such centers.

You might be asking why there are 2n - 1 but not nn centers? The reason is the center of a palindrome can be in between two letters. Such palindromes have even number of letters (such as "abba") and its center are between the two 'b's.
*/

class Solution {
public:
    string longestPalindrome(string s) {
        
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.length(); i++){
            int len1 = middleExpand(s, i, i);
            int len2 = middleExpand(s, i, i+1);
            int len;
            if(len1>len2) {len = len1;} else {len = len2;}
            if(len > end - start){
            start = i - ((len - 1) / 2);
            end = i + (len/2);}
        }
        return s.substr(start, end-start+1);
        
    }
    
    int middleExpand(string s, int left, int right){
        while(left >= 0 && right < s.length()){
            if(s[left] == s[right]){
                left--;
                right++;
            }else{
                break;
            }
        }
        return right - left - 1;
    }
};

