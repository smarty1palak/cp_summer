ListNode* Solution::deleteDuplicates(ListNode* A) {
    struct ListNode *temp=A, *prev=NULL;
    int c=0;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->val==temp->next->val)
        {
            temp=temp->next;
            c=1;
        }
        else
        {
              if(c==1)
              {
                  if(prev!=NULL)
                  {
                      prev->next=temp->next;
                      temp=prev->next;
                  }
                  else
                  {
                      A=temp->next;
                      temp=A;
                  }
                  c=0;
              }
              else
              {
                  prev=temp;
                  temp=temp->next;
                  c=0;
              }
        }
    }
    if(c==1)
    {
        if(prev!=NULL)
                  {
                      prev->next=temp->next;
                      temp=prev->next;
                  }
                  else
                  {
                      A=temp->next;
                      temp=A;
                  }
    }
    return A;
}