string Solution::longestCommonPrefix(vector<string> &A) {
    string s="";
    int m=0;
    int min=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i].length()<min)
         min=A[i].length();
    }
    int k=0;
    for(int k=0,c=0;k<min;k++)
    {
        for(int i=0;i<A.size()-1;i++)
        {
            if(A[i][k]!=A[i+1][k])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            //cout<<A[0][k];
            s+=A[0][k];
        }
        else
         return s;
    }
}