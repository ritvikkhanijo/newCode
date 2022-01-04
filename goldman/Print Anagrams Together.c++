vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        
        for(int i=0;i<string_list.size();i++){
            string t = string_list[i];
            sort(t.begin(),t.end());
            if(mp.find(t)!=mp.end()){
                mp[t].push_back(string_list[i]);
            }else{
                vector<string> v;
                v.push_back(string_list[i]);
                mp[t] = v;
            }
        }
        
        for(auto it: mp){
            ans.push_back(it.second);
        }
        
        return ans; 
        
    }