int Solution::bulbs(vector<int> &A) {
    if(A.size()==0)
     return 0;
    int c=0,group=0,t=0,j;
    for(j=0;j<A.size();j++)
    {
        if(A[j]==1)
        {
            continue;
        }
        else
        {
            c=1;
            break;
        }
    }
    for(int i=j;i<A.size()-1;i++)
    {
        c=1;
        if(A[i]==A[i+1])
        {
            continue;
        }
        else
        {
            group++;
        }
    }
    if(c==1)
    group++;
    
     return group;
}
