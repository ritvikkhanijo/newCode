ull getNthUglyNo(int n) {
	    // code here
	    if(n == 1 || n == 2 || n==3 || n==4 || n==5) return n;
	    ull ans;
	    set<ull> s;
	    s.insert(1);
	    n--;
	    while(n){
	        auto it = s.begin();
	        ull x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	        n--;
	    }
	    return *s.begin();
	}