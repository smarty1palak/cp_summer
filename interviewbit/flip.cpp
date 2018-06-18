vector<int> Solution::flip(string A) {
    vector<int>v;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='1')
            v.push_back(-1);
        else
            v.push_back(1);
    }
    long long sum=0, max_sum=0,l=-1,first=-1,second=-1;
    for(int i=0;i<A.length();i++)
    {
        sum=sum+v[i];
        if(sum>max_sum)
        {
            max_sum=sum;
            first=l+1;
            second=i;
            
        }
        if(sum<0)
        {
            sum=0;
            l=i;
        }
    }
    vector<int >v1;
    if(max_sum<=0)
        return v1;
    else
    {
        v1.push_back(first+1);
        v1.push_back(second+1);
        return v1;
    }
     
}
