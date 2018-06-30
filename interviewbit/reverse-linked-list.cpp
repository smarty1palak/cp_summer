ListNode* Solution::reverseList(ListNode* A) {
    struct ListNode *temp=A, *next, *prev=NULL;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}