void reverse(vector<int>& arr, int i, int j){
        while(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k=k%n;
        if(k == 0) return;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
        
    }