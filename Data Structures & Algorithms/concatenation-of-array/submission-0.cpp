class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int number = 0;
        int size = nums.size();
        for(int i =0; i< size; i++){
            number = nums[i];
            nums.push_back(number);
        }
        return nums;
    }
};