void merge(vector<int>&arr,int start,int mid,int end){
    int left=start;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=end){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=start;i<=end;i++){
        arr[i]=temp[i-start];
    }
}

 void merge_sort(vector<int>&arr,int start,int end){
    if(start>=end){
        return;
    } 
    int mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
 }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        merge_sort(arr,l,r);
        
    }