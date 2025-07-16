 // Iterative Postorder Traversal of a Binary Tree 
 
 vector<int> postOrder(Node* root) {
        stack<Node*>s;
        vector<int>ans;
        s.push(root);
        while(!s.empty()){
            Node*temp=s.top();
            s.pop();
            ans.push_back(temp->data);
            if(temp->left){
              s.push(temp->left);  
            }
              if(temp->right){
                s.push(temp->right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


 // Iterative Inorder Traversal of a Binary Tree
    vector<int> inOrder(Node* root)
    {
       stack<Node*>st;
       vector<int>ans;

       while(root!=NULL||!st.empty()){
           while(root){
           st.push(root);
           root=root->left;
         }
           ans.push_back(st.top()->data);
           root=st.top()->right;
           st.pop();
       }
       return ans;
    }
 

 // Iterative Preorder Traversal of a Binary Tree
  vector<int> preOrder(Node* root)
    {
        stack<Node*>s;
        vector<int>ans;
        s.push(root);
        while(!s.empty()){
            Node*temp=s.top();
            s.pop();
            ans.push_back(temp->data);
            if(temp->right){
                s.push(temp->right);
            }
            if(temp->left){
              s.push(temp->left);  
            }
        }
        return ans;
    }