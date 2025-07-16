 int spanningTree(int V, vector<vector<int>> adj[]) {
       priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
       pq.push({0,{0,-1}});
       vector<int>parent(V);
       vector<bool>ISMST(V,0);
       int cost=0;
       while(!pq.empty()){
           int weight=pq.top().first;
           int node=pq.top().second.first;
           int par=pq.top().second.second;
              pq.pop();
           if(!ISMST[node]){
               ISMST[node]=1;
               parent[node]=par;
               cost+=weight;
               
               
               for(int j=0;j<adj[node].size();j++){
                   if(!ISMST[adj[node][j][0]]){
                       pq.push({adj[node][j][1] ,{adj[node][j][0],node}});
                   }
               }
           }
       }
      return cost; 
    }