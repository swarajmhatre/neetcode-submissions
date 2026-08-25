class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        int res =0;

        for(int i : g){
            int minIndex = -1;
            for(int j =0; j < s.size(); j++){
                if(s[j] < i) continue;

                if(minIndex == -1 || s[minIndex] > s[j]) minIndex = j;
            }

            if(minIndex != -1){
                s[minIndex] = -1;
                res++;
            }
        }
        return res;
    }
};