    bool isPalindrome(Node *head) {
              if(head->next==NULL){
            return 1;
        }
        // count number of nodes
        int count=0;
        Node*current=head,*previous=NULL,*future=NULL;
        while(current){
            count++;
            current=current->next;
        }
        count=count/2;
        // skip number of nodes
        current=head;
        while(count--){
          previous=current;
          current=current->next;
        }
        previous->next=NULL;
        // reverse second linked list
        previous=NULL;
        while(current){
            future=current->next;
            current->next=previous;
            previous=current;
            current=future;
        }
        Node*head1=head,*head2=previous;
        while(head1){
            if(head1->data!=head2->data){
                return 0;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return 1;
    }