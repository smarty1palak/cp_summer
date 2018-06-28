ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    struct ListNode *temp1=A, *temp2=B, *head=NULL, *rear;
    int c=0,value=0;
    while(temp1!=NULL && temp2!=NULL)
    {
        value=temp1->val+temp2->val+c;
        c=0;
        if(value>=10)
        {
            value=value%10;
            c=1;
        }
        if(head==NULL)
        {
            head=temp2;
            head->val=value;
            rear=head;
        }
        else
        {
            rear->next=temp2;
            rear->next->val=value;
            rear=temp2;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=NULL)
    {
        value=temp1->val+c;
        c=0;
        if(value>=10)
        {
            value=value%10;
            c=1;
        }
        if(head==NULL)
        {
            head=temp1;
            head->val=value;
            rear=head;
        }
        else
        {
            rear->next=temp1;
            rear->next->val=value;
            rear=temp1;
        }
        temp1=temp1->next;
        
    }
    while(temp2!=NULL)
{
        value=temp2->val+c;
        c=0;
        if(value>=10)
        {
            value=value%10;
            c=1;
        }
        if(head==NULL)
        {
            head=temp2;
            head->val=value;
            rear=head;
        }
        else
        {
            rear->next=temp2;
            rear->next->val=value;
            rear=temp2;
        }
        temp2=temp2->next;
    }
    if(c==1)
    {
        struct ListNode *curr =new struct ListNode(1); 
        rear->next=curr;
        
    }
    return head;
}