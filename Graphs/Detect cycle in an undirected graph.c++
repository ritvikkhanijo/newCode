    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        queue<pair<int,int>> q;
        q.push({0,-1});
        vector<bool> vis(V,false);
        vis[0] = true;
        while(!q.empty()){
            int root = q.front().first;
            int par = q.front().second;
                
            for(int a: adj[root]){
                if(!vis[a]){
                    vis[a] = true;
                    q.push({a,root});
                }else if(a!=par){
                    return false;
                }
            }
        }
        return true;
        
    }