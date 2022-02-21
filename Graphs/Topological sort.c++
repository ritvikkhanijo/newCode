vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indeg(V,0);
	    vector<int> v;
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        for(auto k:adj[i]){
	            indeg[k]++;
	        }
	    }
	    
	    for(int i=0;i<V;i++){
	        if(indeg[i] == 0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int u = q.front();
	        q.pop();
	        v.push_back(u);
	        for(auto it:adj[u]){
	                if(--indeg[it] == 0) q.push(it);
	        }
	    }
	    
	    return v;
	}