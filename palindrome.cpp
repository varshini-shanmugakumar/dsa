bool isPalindrome(Node *head)
    {
        Node* temp=head;
        Node* temp2=head;
        stack<int> s;
        while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;    
        }
        while(temp2!=NULL){
            int x=s.top();
            s.pop();
            if(x==temp2->data){
                temp2=temp2->next;
            }
            else
                return false;
        }
        if(s.empty()){
            return true;
        }
        return false;
    }
