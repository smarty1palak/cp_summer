int Solution::singleNumber(const vector<int> &A) {
    long long ans=0;
    for(int i=0;i<32;i++)
    {
        int x=1<<i;
        int sum=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]&x)
             sum++;
        }
        if(sum%3)
         ans|=x;
    }
    return ans;
}