ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    struct ListNode *temp1=A, *temp2=B, *head=NULL, *rear;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->val>=temp2->val)
        {
            if(head==NULL)
            {
                head=temp2;
                rear=head;
            }
            else
            {
                rear->next=temp2;
                rear=rear->next;
            }
            temp2=temp2->next;
        }
        else
        {
            if(head==NULL)
            {
                head=temp1;
                rear=head;
            }
            else
            {
                rear->next=temp1;
                rear=rear->next;
            }
            temp1=temp1->next;
        }
    }
    while(temp1!=NULL)
    {
        rear->next=temp1;
        rear=rear->next;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        rear->next=temp2;
        rear=rear->next;
        temp2=temp2->next;
    }
    return head;
}