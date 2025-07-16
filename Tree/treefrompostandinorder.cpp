 int find(vector<int>&inorder,int target,int start,int end){
          for(int i=start;i<=end;i++){
              if(inorder[i]==target){
                  return i;
              }
          }
          return -1;
  }
    
   Node* tree(vector<int>&inorder,vector<int>&postorder,int instart,int inend, int index){
         if(instart>inend){
             return NULL;
   }
        Node*root=new Node(postorder[index]);
        int position=find(inorder,postorder[index],instart,inend);
         root->right=tree(inorder,postorder,position+1,inend,index-1);
         root->left=tree(inorder,postorder,instart,position-1,index-(inend-position)-1);
       
           return root;
        }
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
         return tree(inorder,postorder,0,postorder.size()-1,postorder.size()-1);
    }