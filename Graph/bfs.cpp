 
#include <iostream>
using namespace std;
#include <vector>

void graph(int node,vector<int>&ans,vector<int>&visited,vector<vector<int>>& adj)
  {
      visited[node]=1;
      ans.push_back(node);
      for(int j=0;j<adj[node].size();j++){
          if(!visited[adj[node][j]]){
              graph(adj[node][j],ans,visited,adj);
          }
      }
      
  }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int>ans;
        vector<int>visited(adj.size(),0);
        graph(0,ans,visited,adj);
        return ans;
    }
   
    int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // Remove this line for directed graph
        }
        vector<int> result = dfs(adj);
        for (int node : result) {
            cout << node << " ";
        }
        cout << endl;
        return 0;
    }