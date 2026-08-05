class Solution {
public:
    int lengthOfLastWord(string s) {
        int iPointerIndex = s.length() -1;
        int i =0;
        while(s[iPointerIndex] == ' ') --iPointerIndex;
        
        for( i = iPointerIndex; i>=0; i--){
            if(s[i] == ' '){
                break;
            }
        }
        return iPointerIndex - i;
    }
};