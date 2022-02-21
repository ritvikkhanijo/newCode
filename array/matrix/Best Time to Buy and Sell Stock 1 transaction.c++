//profit. if we find a lower price we update minp else we update the result.

    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int mprof = 0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minp){
                minp = prices[i];
            }else{
                mprof = max(mprof,prices[i] - minp);
            }
        }
        
        return mprof;
    }
