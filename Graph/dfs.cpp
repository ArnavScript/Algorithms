 vector<int> bfs(vector<vector<int>> &adj) {
       vector<int>visited(adj.size(),0);
       vector<int>ans;
       queue<int>q;
       q.push(0);
       visited[0]=1;
       while(!q.empty()){
           int node=q.front();
           q.pop();
           ans.push_back(node);
          for(int j=0;j<adj[node].size();j++){
              if(!visited[adj[node][j]]){
                  visited[adj[node][j]]=1;
                  q.push(adj[node][j]);
              }
          }  
       }
      return ans;
    }