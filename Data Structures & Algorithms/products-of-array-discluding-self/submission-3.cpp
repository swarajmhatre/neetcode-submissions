class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product =1;
        vector<int> result(nums.size(), 1);
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j)  
                    result[i] *= nums[j];
            }
        }

        return result;
    }
};
