int Solution::removeDuplicates(vector<int> &A) {
    int count=1,t,prev=A[0];
    for(int i=1;i<A.size();i++)
    {
        if(A[i]==prev)
        {
            prev=A[i];
            continue;
        }
        else
        {
            prev=A[i];
            t=A[i];
            A[i]=A[count];
            A[count]=t;
            count++;
        }
    }
    return count;
}
