class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> characters;
        for(int i=0; i< s.size(); i++){
            if(isalnum(s[i]))
                characters.push_back(tolower(s[i]));
        }

        if (characters.empty()) return true;
        for(int i=0, j = characters.size()-1; i < j; i++, j--){
            if(characters[i] != characters[j])
                return false;
        }

        return true;
    }
};
