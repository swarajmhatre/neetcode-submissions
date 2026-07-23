class Solution {
   public:
    bool isValid(string s) {
        stack<char> container;
        char a = '{', b = '[', c = '(', p = '}', q = ']', r = ')';

        if (s.length() % 2 == 1) return false;
        for (char ch : s) {
            if (ch == a || ch == b || ch == c) {
                container.push(ch);
            } else if (ch == p || ch == q || ch == r) {
                if (container.empty()) return false;
                char top = container.top();
                if (ch == p && top == a)
                    container.pop();
                else if (ch == q && top == b)
                    container.pop();
                else if (ch == r && top == c)
                    container.pop();
                else
                    return false;
            }
        }
        return container.empty();
    }
};
