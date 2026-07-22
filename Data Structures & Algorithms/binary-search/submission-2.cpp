class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i =0, j = nums.size() -1;

        while(i<=j){
            int pointer = (j-i)/2;
            if(pointer == 0){
                if(nums[i] == target) return i;
                else if(nums[j] == target) return j;
                else return -1;
            }
            if(nums[i + pointer] == target){
                return i + pointer;
            }
            else if(nums[i + pointer] < target){
                i = i + pointer;
            }
            else{
                j = i + pointer;
            }
        }

        return -1;
    }
};
