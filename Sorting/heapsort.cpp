void heapSort(vector<int>& arr) {
          priority_queue<int,vector<int>, greater<int>> pq;
       
       for(int i=0;i<arr.size();i++){
           pq.push(arr[i]);
       }
       
       for(int i=0;i<arr.size();i++){
           arr[i]=pq.top();
           pq.pop();
       }
    }