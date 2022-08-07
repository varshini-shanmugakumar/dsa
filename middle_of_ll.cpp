int length(Node* head){
        Node* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head==NULL)
            return -1;
        Node* temp=head;
        
        int ln=length(head);
        int mid=(ln/2)+1;
        
        while(mid!=1){
            temp=temp->next;
            mid--;
        }
        
        return temp->data;
        
    }