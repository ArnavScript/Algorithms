int getMaxArea(vector<int> &heights) {
        // Your code here
         stack<int>st;
        int index,ans=0;
        int n=heights.size();
        for(int i=0;i<heights.size();i++){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                 index=st.top();
                 st.pop();
                 if(!st.empty()){
                    ans=max(ans,heights[index]*(i-st.top()-1));
                 }
                 else{
                    ans=max(ans,heights[index]*i);
                 }
            }
            st.push(i);
        }
        while(!st.empty()){
             index=st.top();
             st.pop();
            if(!st.empty()){
               ans=max(ans,heights[index]*(n-st.top()-1));
              }
            else{
               ans=max(ans,heights[index]*n);
           }
        }
        return ans;
    }