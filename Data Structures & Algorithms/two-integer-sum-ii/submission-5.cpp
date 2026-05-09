class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp; 
        int l =0;
        int r = numbers.size() -1;
        long currSum = 0;
        while(l<r){
            currSum = numbers[l] + numbers[r];
            if(currSum < target){
                l++;
            }
            else if(currSum > target){
                r--;
            }
            else
            {
                return 
                {l+1, r + 1};
            }
        }
        return {};
    }
};
