class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> pref(nums.size(),1);
       vector<int> suff(nums.size(),1);
       vector<int> result(nums.size(),1);

       pref[0] = 1;
       suff[nums.size() -1] = 1;

       for(int i =1; i< nums.size(); i++)
       {
            pref[i] = nums[i-1] * pref[i-1];
       }

       for(int j = nums.size()-2; j >= 0; j--){
            suff[j] = suff[j+1] * nums[j+1];
       }

       for(int k =0; k< nums.size(); k++){
            result[k] = pref[k] * suff[k];
       }

       return result;
    }
};