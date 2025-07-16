 int maxSubarraySum(vector<int> &arr) {
       int ans=INT_MIN,prefix=0,n=arr.size();
       for(int i=0;i<n;i++){
           prefix=prefix+arr[i];
           ans=max(ans,prefix);
           if(prefix<0){
               prefix=0;
           }
       }
       return ans;
    }