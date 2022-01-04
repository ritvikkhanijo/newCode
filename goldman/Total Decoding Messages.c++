int count(string str,int n){
	        if(n == 1 ||  n == 0) return 1;
	        if(str[0] == '0') return 0;
	        
	        
	        int c = 0;
	        
	        if(str[n-1] > '0') c+=count(str,n-1);
	        
	        if(str[n-2] == '1' || (str[n-2] == '2' && str[n-1]<'7')) c+=count(str,n-2);
	        
	        return c;
	    }
	    
		int CountWays(string str){
		    // Code here
		    int n = str.length();
		    if(n == 0 || (n == 1 && str[0]=='0')) return 0;
		    return count(str,n);
		}
