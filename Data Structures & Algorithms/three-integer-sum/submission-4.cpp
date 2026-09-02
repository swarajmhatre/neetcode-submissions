class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniqueTrip;
        sort(nums.begin(), nums.end());
        for(int i =0; i< n; i++){
            int j = i+1, k = n-1;
            while(j < k){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> Trip = {nums[i],  nums[j], nums[k]};
                    if(uniqueTrip.find(Trip) == uniqueTrip.end()){

                    uniqueTrip.insert(Trip);
                    }
                    j++;
                    k--;
                }
                else if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        vector<vector<int>> ans(uniqueTrip.begin(), uniqueTrip.end());

        return ans;
    }
};
