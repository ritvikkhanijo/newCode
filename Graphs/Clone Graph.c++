unordered_map<graphNode *,graphNode *> mp;
graphNode *help(graphNode *node){
    if(node == NULL) return NULL;
    if(mp.find(node)!=mp.end()) return mp[node];
    graphNode *t = new graphNode(node->data);
    mp[node] = t;
    for(auto it:node->neighbours){
        t->neighbours.push_back(help(it));
    }
    return t;
}
graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
    return help(node);
}