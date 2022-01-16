class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string sub = "";
         int maxLen = 0;
         int i = 0;
         int j = 0;
    while (j < s.size())
    {
        if (sub.find(s[j]) >= s.length())
        {

            sub += s[j];
            j++;
            maxLen = max<int>(sub.size(), maxLen);
        }
        else
        {
            sub = sub.substr(1);
            i++;
        }
    }
        return maxLen;
    }
};