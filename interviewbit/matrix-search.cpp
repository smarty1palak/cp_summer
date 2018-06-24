int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int t=-1;
    for(int i=0;i<A.size();i++)
    {
        if(B>=A[i][0]&& B<=A[i][A[i].size()-1])
        {
            t=i;
            break;
        }
    }
    if(t==-1)
     return 0;
    else
    {
        int l=0, r=A[t].size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(A[t][mid]==B)
             {
                 return 1;
             }
             else if(A[t][mid]<B)
             {
                 l=mid+1;
             }
             else
             {
                 r=mid-1;
             }
        }
    }
    return 0;
}
