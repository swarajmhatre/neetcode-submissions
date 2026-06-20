class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix = strs[0];
        string result = "";
        bool match = true;
        for(int i =0; i< prefix.length(); i++){
            char ch = prefix[i];
            for(int j = 1; j < strs.size(); j++){
                if(ch != strs[j][i] || strs[j].length() - 1 < i){
                    match = false;
                    break;
                }
            }
            if(match){
                result.push_back(ch);
            }
            else{
                break;
            }

        }
        return result;
    }
};
