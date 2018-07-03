int Solution::majorityElement(const vector<int> &A) {
    int  count=1,prev=0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]==A[prev])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            prev=i;
            count=1;
        }
    }
    return A[prev];
}