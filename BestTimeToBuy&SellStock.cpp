class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxprofit = 0;
        for(int i=0;i<n;i++){
            if(mini>prices[i]){
                mini = prices[i];
            }
            int profit = prices[i]-mini;
            if(maxprofit<profit){
                maxprofit = profit;
            }
        }
        return maxprofit;
    }
};
