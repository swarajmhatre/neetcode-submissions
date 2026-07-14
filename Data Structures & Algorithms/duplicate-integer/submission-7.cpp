class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return false;
        bool retVal = false;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <  nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                retVal = true;
                break;
            }
        }
        return retVal;
    }
};