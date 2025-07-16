bool DFS(int node,vector<int>adj[],vector<bool>&visited,int &count,int V){
      visited[node]=1;
      count++;
      if(count==V){
          return 1;
      }
      for(int j=0;j<adj[node].size();j++){
          if(!visited[adj[node][j]]){
              if(DFS(adj[node][j],adj,visited,count,V)){
                  return 1;
              }
          }
      }
      visited[node]=0;
      count--;
      return 0;
  }
    bool check(int V, int E, vector<vector<int>> edges) {
       vector<int>adj[V+1];
       for(int i=0;i<E;i++){
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);
       }
       
       vector<bool>visited(V+1,0);
       int count=0;
       for(int i=1;i<=V;i++){
           if(DFS(i,adj,visited,count,V)){
               return 1;
           }
       }
       return 0;
    }