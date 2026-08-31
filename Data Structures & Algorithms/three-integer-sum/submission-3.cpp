class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> uniqueTrip;
        for(int i =0; i< n; i++){
            set<int> s;
            for(int j = i+1; j < n; j++){
                int target = -(nums[i] + nums[j]);
                if(s.find(target) != s.end()){
                    vector<int> trip = { nums[i], nums[j], target};
                    sort(trip.begin(), trip.end());
                    uniqueTrip.insert(trip);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector <int>> ans(uniqueTrip.begin(), uniqueTrip.end());

        return ans;
    }
};
