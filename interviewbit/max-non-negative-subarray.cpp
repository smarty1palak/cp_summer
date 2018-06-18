vector<int> Solution::maxset(vector<int> &A) {
    vector<tuple<long  , long , long> >v;
    vector<int>v1;
    long long first=0, k=0,i;
    long long prev=-1, sum=0,a=0 ,b=0;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
            sum=sum+A[i];
        }
        else
        {
            if(sum>=prev)
            {
              prev=sum;
              a=first;
              b=i-1;
              v.push_back( tuple<long long, long long, long long>(sum,b-a,a) );
            }
            sum=0;
            first=i+1;
        }
    }
    if(sum>=prev)
    {
            v.push_back( tuple<long long, long long, long long>(sum,i-first-1,first));
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(long long i=get<2>(v[0]) ;i<=get<1>(v[0])+get<2>(v[0]);i++)
     v1.push_back(A[i]);
    return v1;
}