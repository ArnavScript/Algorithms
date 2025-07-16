 struct Node* reverseList(struct Node* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
       struct Node* temp=head;
       struct Node* future=NULL;
       struct Node* prev=NULL;
       while(temp){
           future=temp->next;
           temp->next=prev;
           prev=temp;
           temp=future;
       }
       head=prev;
       return head;
    }