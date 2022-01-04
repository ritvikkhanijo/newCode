int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int c = 0;
        long long prod = 1;int left=0;
        for(int i=0;i<n;i++){
            prod*=a[i];
            while(prod>=k) prod/=a[left++];
            c+= (i-left+1);
        }
        return c;
    }