class Solution {
public:
    string longestPalindrome(string s) {
        int n= s.length();
        int start=0;
        int maxLen=1;
        for(int i=0;i<n;i++){
            //case1 for odd length
            int left=i;
            int right=i;
            while(left>=0 && right <n && s[left]==s[right]){
                if(right-left+1>maxLen) {
                    start=left;
                    maxLen=right-left+1;
                }
                left--;
                right++;
            }
            //case2 even length palindrome 
            left=i;
            right=i+1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right-left+1 >maxLen){
                    start=left;
                    maxLen=right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxLen);
    }
};