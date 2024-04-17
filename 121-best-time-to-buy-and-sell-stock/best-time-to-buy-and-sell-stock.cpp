class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0; int buy = 0; int sell = 0;
        while(sell < prices.size()){
            if (prices[sell] > prices[buy])
                maxP = max(maxP, prices[sell] - prices[buy]);
            else
                buy = sell;
            ++sell;
        }
        return maxP;
    }
};