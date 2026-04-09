class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0, min = 999, max = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            p = prices[i] - min;
            if(p > max){
                max = p;
            }
        }
        return max;
    }
};
