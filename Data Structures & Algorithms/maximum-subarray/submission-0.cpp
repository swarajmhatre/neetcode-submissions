class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int iMax = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long iSum = 0;
            for (int j = i; j< n; j++){
                iSum += nums[j];
                if(iSum > iMax) iMax = iSum;
            }
        }
        return iMax;
    }
};