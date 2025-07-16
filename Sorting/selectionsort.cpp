   void selectionSort(vector<int> &arr) {
       for(int i=0;i<arr.size()-1;i++){
           int index=i;
           for(int j=i+1;j<arr.size();j++){
               if(arr[index]>arr[j]){
                   index=j;
               }
           }
           swap(arr[i],arr[index]);
       }
    }