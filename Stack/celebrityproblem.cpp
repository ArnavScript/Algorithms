  int celebrity(vector<vector<int> >& mat) {
        int n=mat.size();
        stack<int>st;
       for(int i=0;i<n;i++){
          st.push(i);
        }
        int first,second;
       while(st.size()>1){
           first=st.top();
           st.pop();
           second=st.top();
           st.pop();
           if(mat[first][second]&&!mat[second][first])
           st.push(second);
           else if(!mat[first][second]&&mat[second][first])
           st.push(first);
      }
      if(st.empty()){
          return -1;
      }
      int celebrity=st.top();
      st.pop();
      int row=0,column=0;
      for(int i=0;i<n;i++){
          if(celebrity!=i){
             row+=mat[celebrity][i];
             column+=mat[i][celebrity];
        }
      }
      return row==0&&column==n-1?celebrity:-1;
    }