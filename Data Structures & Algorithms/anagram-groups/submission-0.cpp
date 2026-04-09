class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;

        for(auto & s: strs){
            string key = s;
            sort(key.begin(), key.end());
            maps[key].push_back(s);
        }

        vector<vector<string>> result;

        for(auto &arr : maps){
            result.push_back(arr.second);
        }

        return result;
    }
};
