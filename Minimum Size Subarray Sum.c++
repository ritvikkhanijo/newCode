    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,n=nums.size();
        int sum = 0,res = INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                res = min(i-l+1,res);
                sum-=nums[l];
                l++;
            }
        }
        
        if(res == INT_MAX) return 0;
        else return res;
    }