void DFS(int node,vector<int>adj[],vector<int>&visited){
         visited[node]=1;
         for(int j=0;j<adj[node].size();j++){
             if(!visited[adj[node][j]]){
                 DFS(adj[node][j],adj,visited);
             }
         }
     }
	int isEulerCircuit(int V, vector<int>adj[]){
	  vector<int>degree(V,0);
	  int odd_degree=0;
	  for(int i=0;i<V;i++){
	      degree[i]=adj[i].size();
	      if(degree[i]%2){
	          odd_degree+=1;
	      }
	  }
	  if(odd_degree!=2&&odd_degree!=0){
	      return 0;
	  }
	  
	  vector<int>visited(V,0);
	  for(int i=0;i<V;i++){
	      if(degree[i]){
	          DFS(i,adj,visited);
	          break;
	      }
	  }
	  for(int i=0;i<V;i++){
	      if(degree[i]&&!visited[i]){
	          return 0;
	      }
	  }
	  if(odd_degree==0)
	  return 2;
	  else
	  return 1;
	}