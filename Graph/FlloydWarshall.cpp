void shortestDistance(vector<vector<int>>& mat) {
       int v=mat.size();
       for(int i=0;i<v;i++)
       for(int j=0;j<v;j++)
            if(mat[i][j]==-1){
               mat[i][j]=INT_MAX;
            }
            
        for(int k=0;k<v;k++)  
        for(int i=0;i<v;i++)
        for(int j=0;j<v;j++){
           if(mat[i][k]==INT_MAX||mat[k][j]==INT_MAX){
               continue;
           }
           mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
        }
        
        for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            if(mat[i][j]==INT_MAX)
               mat[i][j]=-1;  
          
    }