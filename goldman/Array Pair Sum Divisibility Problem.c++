    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]%k]++;
        }
        
        for(int i=0;i<n;i++){
            int a = nums[i]%k;
            if(a == 0){
                if(mp[a]%2 != 0) return false;
            }
            else if(k == 2*a){
                if(mp[a]%2 != 0) return false;
            }
            else if(mp[a]!=mp[k-a]){
                return false;
            }
        }
        
        return true;
    }
        
};