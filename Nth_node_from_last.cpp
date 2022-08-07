int length(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int getNthFromLast(Node *head, int n)
{
       int len=length(head);
       Node* temp=head;
       int i=len-n+1;
       if(i<1)
            return -1;
       else{
            for(int j=1;j<i;j++)
                temp=temp->next;
       }
       return temp->data;
}
