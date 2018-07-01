ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    struct ListNode *temp=A;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int to=count-B;
    if(to<=0)
    {
        A=A->next;
    }
    else if(to==count-1)
    {
        temp=A;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
    }
    else
    {
        int c=0;
        temp=A;
        while(c<to-1)
        {
            temp=temp->next;
            c++;
        }
        temp->next=temp->next->next;
    }
    return A;
}
