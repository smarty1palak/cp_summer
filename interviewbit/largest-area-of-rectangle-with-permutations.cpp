int Solution::solve(vector<vector<int> > &A) {
    int sol[A.size()][A[0].size()];
    for(int i=0;i<A[0].size();i++)
    {
        sol[0][i]=A[0][i];
        for(int j=1;j<A.size();j++)
        {
            if(A[j][i]==1)
            {
                sol[j][i]=sol[j-1][i]+1;
            }
            else
            {
                sol[j][i]=0;
            }
        }
    }
    for(int i=0;i<A.size();i++)
    {
        sort(sol[i], sol[i]+A[0].size());
        reverse(sol[i], sol[i]+A[0].size());
    }
    int max=1;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(sol[i][j]*(j+1)>max)
            {
                max=sol[i][j]*(j+1);
            }
        }
    }
    return max;
}
