int majorityElement(vector<int>& a) {
       int count, candidate, n;
        
        n = a.size();
        
        // finding the candidate
        candidate = a[0];
        count = 1;
        for(int i=1;i<n;i++) {
            if(candidate != a[i]) {
                count--;
            }else{
                count++;
            }
            
            if(count == 0) {
                candidate = a[i];
                count = 1;
            }
        }
        
        // find the majority candidate
        count = 0;
        for(int i=0;i<n;i++) {
            if(a[i] == candidate) {
                count++;
            }
            
            if(count > (n/2)) {
                break;
            }
        }
        
        return candidate;
    };