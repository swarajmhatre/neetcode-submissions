#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Encode list of strings to a single string
        string encode(vector<string>& strs) {
                string res = "";
                        
                                for (string& s : strs) {
                                            res += to_string(s.size()) + '#' + s;
                                                    }
                                                            
                                                                    return res;
                                                                        }

                                                                            // Decode single string back to list of strings
                                                                                vector<string> decode(string s) {
                                                                                        vector<string> res;
                                                                                                int i = 0;
                                                                                                        
                                                                                                                while (i < s.size()) {
                                                                                                                            // Find the delimiter '#'
                                                                                                                                        int j = i;
                                                                                                                                                    while (s[j] != '#') {
                                                                                                                                                                    j++;
                                                                                                                                                                                }
                                                                                                                                                                                            
                                                                                                                                                                                                        // Length of the string
                                                                                                                                                                                                                    int len = stoi(s.substr(i, j - i));
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                            // Move past '#'
                                                                                                                                                                                                                                                        j++;
                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                // Extract the string
                                                                                                                                                                                                                                                                                            string word = s.substr(j, len);
                                                                                                                                                                                                                                                                                                        res.push_back(word);
                                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                // Move to next segment
                                                                                                                                                                                                                                                                                                                                            i = j + len;
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                                                                    return res;
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                        };
