class Solution {
   public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                int iIndex = i + 1;
                int j = 1;
                while (j < needle.length()) {
                    if (haystack[iIndex] != needle[j]) break;
                    iIndex++;
                    j++;
                }
                if (j == needle.length()) return i;
            }
        }
        return -1;
    }
};