int Solution::firstMissingPositive(vector<int> &A) {
    int ini=0,t;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0)
        {
            t=A[ini];
            A[ini]=A[i];
            A[i]=t;
            ini++;
        }
    }
    for(int i=ini;i<A.size();i++)
    {
        if(abs(A[i])+ini<=A.size())
        {
            A[abs(A[i])+ini-1]=-A[abs(A[i])+ini-1];
        }
    }
    for(int i=ini;i<A.size();i++)
    {
        if(A[i]>0)
        {
            return i-ini+1;
        }
    }
    return A.size()-ini+1;
}
