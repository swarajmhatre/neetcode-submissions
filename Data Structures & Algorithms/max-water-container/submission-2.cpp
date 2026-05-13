class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int vol = 0, res =0;
        while(l < r){
            vol  = min(heights[r], heights[l]) * (r - l);
            res = max (vol, res);
            if(heights[r] > heights[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};
