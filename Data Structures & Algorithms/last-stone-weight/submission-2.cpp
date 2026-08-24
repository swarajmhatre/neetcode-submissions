class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.rbegin(), stones.rend());
        while(stones.size() > 1){
            int diff = abs(stones[1] - stones[0]);
            stones.erase(stones.begin(), stones.begin() + 2);
            if(diff != 0) stones.push_back(diff);
            sort(stones.rbegin(), stones.rend());
        }
        if(stones.size() == 1) return stones[0];
        return 0;
    } 
};
