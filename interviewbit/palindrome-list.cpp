/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    struct ListNode *temp, *slow=A, *fast=A, *prev=NULL, *next, *end, *start, *mid;
    while(fast!=NULL && fast->next!=NULL)
    {
      fast=fast->next->next;
      end=slow;
      slow=slow->next;
    }
    if(fast!=NULL)
     {
         start=slow->next;
     }
     else
     {
         start=slow;
     }
    temp=start;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    int c=0;
    temp=A;
    mid=prev;
    while(temp!=slow && mid!=NULL)
    {
        if(temp->val!=mid->val)
        {
            c=1;
            break;
        }
        temp=temp->next;
        mid=mid->next;
    }
    if(c==0)
     return 1;
    else
     return 0;
}