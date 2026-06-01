class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxp=0;
    int bestbuy=prices[0];
    int n =prices.size();
    for(int i =1;i<n;i++){
            if(prices[i] < bestbuy) {
                bestbuy = prices[i];
            }
        int profit=prices[i]-bestbuy;
            if(profit>maxp){
            maxp=profit;
            }
    }   
    return maxp;
}
};