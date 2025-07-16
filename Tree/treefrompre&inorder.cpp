  int find(vector<int>&inorder,int target,int start,int end){
          for(int i=start;i<=end;i++){
              if(inorder[i]==target){
                  return i;
              }
          }
          return -1;
  }
    
        Node* tree(vector<int>&inorder,vector<int>&preorder,int instart,int inend, int index){
            if(instart>inend){
                return NULL;
            }
            Node*root=new Node(preorder[index]);
            int position=find(inorder,preorder[index],instart,inend);
            root->left=tree(inorder,preorder,instart,position-1,index+1);
            root->right=tree(inorder,preorder,position+1,inend,index+(position-instart)+1);
            return root;
            
        }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
       return tree(inorder,preorder,0,preorder.size()-1,0);
    }