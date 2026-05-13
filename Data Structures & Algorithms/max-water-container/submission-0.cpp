class Solution {
public:
    int maxArea(vector<int>& heights) {
        int diff =0;
        int dist =0;
        int vol = 0;
        for(int i =0; i< heights.size() - 1; i++){
            for(int j =0; j < heights.size(); j++){
                diff = min(heights[i] , heights[j]);
                dist = j - i;
                vol = max(diff * dist, vol);
            }
        }
        return vol;
    }
};
