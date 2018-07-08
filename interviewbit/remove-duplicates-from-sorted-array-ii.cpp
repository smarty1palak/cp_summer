int Solution::removeDuplicates(vector<int> &A) {
    int count=1, prev=A[0],c=1,t;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]==prev && c<2)
        {
            prev=A[i];
            t=A[i];
            A[i]=A[count];
            A[count]=t;
            count++;
            c++;
        }
        else if(A[i]!=prev)
        {
            c=1;
            prev=A[i];
            t=A[i];
            A[i]=A[count];
            A[count]=t;
            count++;
        }
    }
    return count;
}
