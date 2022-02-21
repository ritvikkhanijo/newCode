vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> vis(V,false);
        
        queue<int> q;
        q.push(0);
        vis[0] = true;
        while(!q.empty()){
            int t = q.front();
            q.pop();
            ans.push_back(t);
            
            for(auto it:adj[t]){
                if(!vis[it]){
                    vis[it] = true;
                    q.push(it);
                } 
            }
        }
        return ans;
    }