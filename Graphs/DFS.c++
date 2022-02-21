void depthFirstSearchHelper(int vertex, vector<int> &visited, vector<int> &singleComponent, vector<vector<int>> &graph)
{
    visited[vertex] = 1;
    singleComponent.push_back(vertex);

    for (auto child : graph[vertex])
    {
        // Check if the node is visited before or not.
        if (!visited[child])
        {
            depthFirstSearchHelper(child, visited, singleComponent, graph);
        }
    }
}
   
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &graph)
{
    vector<vector<int>> components;
    vector<int> visited(V, 0);

    for (int vertex = 0; vertex < V; vertex++)
    {
        if (!visited[vertex])
        {
            vector<int> singleComponent;
            depthFirstSearchHelper(vertex, visited, singleComponent, graph);
            components.push_back(singleComponent);
        }
    }
    return components;
}