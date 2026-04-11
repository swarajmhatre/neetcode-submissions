class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> result(nums.size());
       long product = 1;
       int zeroCount = 0;
       for(int i = 0; i< nums.size(); i++){
            if (nums[i] != 0) product *= nums[i];
            else zeroCount++;
       }
       
       for(int i = 0; i < nums.size(); i++){
            if (zeroCount > 1) result[i] = 0;
            else if (zeroCount == 1) result[i] = (nums[i] == 0) ? product : 0;
            else result[i] = product/nums[i];
       }
        return result;
    }
};