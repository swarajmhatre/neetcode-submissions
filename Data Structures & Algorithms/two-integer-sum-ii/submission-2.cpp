class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++){
            auto it = find(numbers.begin(), numbers.end(), target - numbers[i]);
            if(it != numbers.end()){
                int index =  distance(numbers.begin(), it);
                return {i+1, index+1};
            }

        }
        return {};
    }
};
