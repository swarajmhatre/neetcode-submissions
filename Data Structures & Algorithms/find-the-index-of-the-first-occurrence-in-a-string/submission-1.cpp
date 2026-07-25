class Solution {
   public:
    int strStr(string haystack, string needle) {
        string_view h_view(haystack);
        string_view n_view(needle);
        int m = haystack.length();
        int n = needle.length();


        for(int i=0; i<= m -n; i++){
            if(h_view.substr(i, n) == n_view) return i;
        }

        return -1;
    }
};