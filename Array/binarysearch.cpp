int binarysearch(vector<int> &arr, int k) {
        // code here
        int start=0,mid,ans=-1;
        int end=arr.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==k){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]<k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
       return ans;
    }