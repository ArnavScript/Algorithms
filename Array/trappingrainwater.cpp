int maxWater(vector<int> &height) {
         int leftmax=0,rightmax=0,index=0,water=0;
       // find the maximum height
      int maxheight=height[0];
      for(int i=1;i<height.size();i++){
        if(maxheight<height[i]){
            maxheight=height[i];
            index=i;
        }
      }

      // left part

      for(int i=0;i<index;i++){
        if(leftmax>height[i]){
            water+=leftmax-height[i];
        }
        else{
            leftmax=height[i];
        }
      }

      // right part

      for(int i=height.size()-1;i>index;i--){
        if(rightmax>height[i]){
            water+=rightmax-height[i];
        }
        else{
           rightmax=height[i];
        }
      }
      return water;
    }