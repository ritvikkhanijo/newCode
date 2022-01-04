int *findTwoElement(int *arr, int n) {
        // code here
        int mis,rep;
        int *ans = new int[2];
        for(int i=0;i<n;i++){
            int idx = abs(arr[i]) - 1;
            if(arr[idx] < 0){
                rep = idx+1;
            }else{
                arr[idx] = -arr[idx];
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                mis = i+1;
                break;
            }
        }
        
        ans[0] = rep;
        ans[1] = mis;
        
        return ans;
    }