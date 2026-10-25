class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxLen=0;
        int n= s.length();
        for(int right=0;right<n;right++){
            for (int i = left; i < right; i++) {
                if (s[i]==s[right]) {
                    left=i+1;
                    break;
                }
            }
            maxLen = max(maxLen,right - left+1);
         }
         return maxLen;
        
    }
};