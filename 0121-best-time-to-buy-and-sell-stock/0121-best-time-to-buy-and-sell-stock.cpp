class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxn=0;
        int minn=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++){
           if(prices[i]<minn){
            minn=prices[i];
           }
           else{
            maxprofit=max(maxprofit,prices[i]-minn);
           }
        }
        
        return maxprofit;
    }
};