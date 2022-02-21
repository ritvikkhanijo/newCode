 vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int total = pow(2,N);
        vector<int> ans;
        for(int i = 0;i<total;i++){
            int k = i;
            int sum=0;
            for(int j=0;j<N;j++){
                if(k%2 == 0){
                    sum+=arr[j];
                }
                k/=2;
            }
            ans.push_back(sum);
        }
        
        return ans;
    }