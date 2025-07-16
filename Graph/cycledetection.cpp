// method to detect cycle in an undirected graph using BFS  
  
  bool IsCycle(int vertex,vector<int>adj[], vector<int>& visited){
    queue<pair<int,int>>q;
    q.push(make_pair(vertex,-1));
      visited[vertex]=1;
   while(!q.empty()){
       int node=q.front().first;
       int parent=q.front().second;
       q.pop();
    for (int j = 0; j < adj[node].size(); j++) {
        if (parent == adj[node][j])
            continue;
        if (visited[adj[node][j]] == 1)
            return true;
        visited[adj[node][j]] = 1;
        q.push(make_pair(adj[node][j],node));
    }
   }
    return false;
}
bool isCycle(int V, vector<vector<int>>& edges) {
     vector<int>adj[V];
     for(int i=0;i<edges.size();i++){
         adj[edges[i][0]].push_back(edges[i][1]);
         adj[edges[i][1]].push_back(edges[i][0]);
     }
    vector<int> visited(V, 0);
    for (int i = 0; i < V; i++) {
        if (!visited[i] && IsCycle(i,adj, visited)) {
            return true;
        }
    }
    return false;
}



// method to detect cycle in an directed graph  using BFS

  bool isCyclic(int V, vector<vector<int>> &edges) {
              vector<int>adj[V];
     for(int i=0;i<edges.size();i++){
         adj[edges[i][0]].push_back(edges[i][1]);
     }
     queue<int>q; vector<int>ans;vector<int>incoming(V,0);
        for(int i=0;i<V;i++){
           for(int j=0;j<adj[i].size();j++){
               incoming[adj[i][j]]++;
           }
       }
       for(int i=0;i<V;i++){
           if(incoming[i]==0)
               q.push(i);
       }
       while(!q.empty()){
           int node=q.front();
           q.pop();
           ans.push_back(node);
           for(int j=0;j<adj[node].size();j++){
               incoming[adj[node][j]]--;
               if(incoming[adj[node][j]]==0){
                   q.push(adj[node][j]);
               }
           }
       }
        return ans.size()!=V;
    }