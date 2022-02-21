string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string k1 = strs[0];
        string k2 = strs[n-1];
        int i=0;
        string res;
        while( i<k1.length() && i<k2.length() && k1[i] == k2[i]){
            res+=k1[i];
            i++;
        }
        return res;
    }