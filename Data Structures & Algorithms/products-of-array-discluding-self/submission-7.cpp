class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // Stores the product of all elements to the left of each index
        vector<int> pref(n, 1);

        // Stores the product of all elements to the right of each index
        vector<int> suff(n, 1);

        // Final answer array
        vector<int> result(n, 1);

        // No elements exist to the left of the first index,
        // so initialize with the multiplicative identity (1)
        pref[0] = 1;

        // No elements exist to the right of the last index,
        // so initialize with the multiplicative identity (1)
        suff[n - 1] = 1;

        // Build prefix product array
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] * nums[i - 1];
        }

        // Build suffix product array
        for (int j = n - 2; j >= 0; j--) {
            suff[j] = suff[j + 1] * nums[j + 1];
        }

        // Product of all elements except self
        for (int i = 0; i < n; i++) {
            result[i] = pref[i] * suff[i];
        }

        return result;
    }
};