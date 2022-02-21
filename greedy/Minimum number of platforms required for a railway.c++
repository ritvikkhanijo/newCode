int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    
    int c = 1;
    int i=1,j=0;
    int res = INT_MIN;
   while(i<n && j<n){
       if(at[i]<=dt[j]) {
           c++;
           i++;
       }
       else {
           c--;
           j++;
       }
       res = max(res,c);
   }
    
    return res;
    
}