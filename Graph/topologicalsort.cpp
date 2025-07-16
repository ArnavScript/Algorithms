  vector<int> topoSort(int V, vector<vector<int>>& edges) {
          vector<int>adj[V];
      for(int i=0;i<edges.size();i++){
         adj[edges[i][0]].push_back(edges[i][1]);
       }
     queue<int>q;
     vector<int>ans;
     vector<int>incoming(V,0);
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
        return ans;
    }