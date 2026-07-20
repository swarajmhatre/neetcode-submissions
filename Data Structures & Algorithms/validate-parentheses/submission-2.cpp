class Solution {
public:
    bool isValid(string s) {
        stack<int> container;
        char a = '{', b = '[', c = '(', p = '}', q = ' ]', r = ')';

        if(s.length()%2 == 1) return false;
        for(int i =0; i < s.length(); i++){
            if(s[i] == a || s[i] == b || s[i] == c){
                container.push(s[i]);
            }
            else if(s[i] == p || s[i] == q || s[i] == r){
                if(container.empty()) return false;
                if(s[i] == p && container.top() == a) container.pop();
                else if(s[i] == q && container.top() == b) container.pop();
                else if(s[i] == r && container.top() == c) container.pop();
                else return false;
            }

        }
        if(container.empty()) return true;
        return false;
    }
};
