class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = prices[0];
        int res = 0;

        for (int i = 1; i < prices.size(); i++) {
            // Update the minimum value seen so far
            if (prices[i] < minSoFar) {
                minSoFar = prices[i];
            }

            // Update result if we get more profit
            if (prices[i] - minSoFar > res) res = prices[i] - minSoFar;
        }
        return res;
    }
};
