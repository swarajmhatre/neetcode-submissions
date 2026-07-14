class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int i : nums) {
            if (uset.contains(i)) return true;
            uset.insert(i);
        }
        return false;
    }
};