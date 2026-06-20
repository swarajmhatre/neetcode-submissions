class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        unordered_map<char, int> symbols = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        int prev = 0;
        for (int i = s.length() -1; i >= 0; i--){
            if(symbols[s[i]] < prev){
                result -= symbols[s[i]];
            }
            else{
                result += symbols[s[i]];
            }
            prev = symbols[s[i]];
        }
        return result;
    }
};