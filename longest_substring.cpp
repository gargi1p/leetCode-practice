class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.length(), longest = 0;
            vector<int> nextIndex(128); 
    
            for (int r=0, l=0; r<n; r++) {
                l = max(nextIndex[s[r]], l); 
                longest = max(longest, r - l + 1);
                nextIndex[s[r]] = r + 1;
            }
    
            return longest;
        }
    };