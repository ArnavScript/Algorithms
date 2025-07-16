  
  
  vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // adjacency list create kro 
        vector<pair<int,int>>adj[V];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<bool>explored(V,0);
        vector<int>distance(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>(q);
        q.push({0,src});
        distance[src]=0;
        
        while(!q.empty()){
            int node=q.top().second;
            q.pop();
            explored[node]=1;
            for(int j=0;j<adj[node].size();j++){
                int neighbour=adj[node][j].first;
                int weight=adj[node][j].second;
                if(!explored[neighbour]&&distance[node]+weight<distance[neighbour]){
                    distance[neighbour]=distance[node]+weight;
                    q.push({distance[neighbour],neighbour});
                }
            }
        }
        return distance;
    }