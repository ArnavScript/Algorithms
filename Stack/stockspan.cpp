 vector<int> calculateSpan(vector<int>& arr) {
           stack<int>st;
           vector<int>ans(arr.size());
           for(int i=arr.size()-1;i>=0;i--){
               while(!st.empty()&&arr[st.top()]<arr[i]){
                   ans[st.top()]=st.top()-i;
                   st.pop();
               }
               st.push(i);
           }
           while(!st.empty()){
               ans[st.top()]=st.top()+1;
               st.pop();
           }
           return ans;
    }
};