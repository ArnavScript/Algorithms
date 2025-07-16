  void rotateby90(vector<vector<int> >& matrix) {
          int rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<rows-1;i++){
            for(int j=i+1;j<cols;j++){
          swap(matrix[i][j],matrix[j][i]);
            }
        }
          for(int i=0;i<rows;i++){
           int start=0,end=rows-1;
           while(start<end){
               swap(matrix[start][i],matrix[end][i]);
               start++,end--;
           }
        }
    }