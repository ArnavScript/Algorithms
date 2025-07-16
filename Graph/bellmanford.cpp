

    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
       vector<int>distance(V,1e8);
       distance[src]=0;
       for(int i=0;i<V-1;i++){
           bool flag=0;
           for(int j=0;j<edges.size();j++){
               int u=edges[j][0];
               int v=edges[j][1];
               int w=edges[j][2];
               if(distance[u]==1e8)
                   continue;
               if(distance[u]+w<distance[v]){
                   flag=1;
                   distance[v]=distance[u]+w;
               }
           }
           if(flag==0){
               return distance;
           }
           
       }
        for(int j=0;j<edges.size();j++){
               int u=edges[j][0];
               int v=edges[j][1];
               int w=edges[j][2];
               if(distance[u]==1e8)
                   continue;
               if(distance[u]+w<distance[v]){
                  vector<int>path;
                  path.push_back(-1);
                  return path;
               }
           }
           return distance;
    }