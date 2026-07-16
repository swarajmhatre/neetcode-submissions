class Solution {
   public:
    int maxProfit(vector<int>& prices) {
       int minSoFar = prices[0];
       int res = 0;

       for(int i =0; i< prices.size(); i++){
            if(minSoFar > prices[i]) 
                minSoFar = prices[i];

            if(prices[i] - minSoFar > res) res = prices[i] - minSoFar;
        }

        return res;
    }
};