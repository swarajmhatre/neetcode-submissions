class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>  freq;
        int maxFreq =0;
        int maxFreqElement = 0;
        for(int i : nums){
            freq[i]++;
            if(freq[i] > maxFreq){
                maxFreq = freq[i];
                maxFreqElement = i;
            }
        }
        return maxFreqElement;
    }
};