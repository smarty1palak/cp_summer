int Solution::seats(string A) {
    vector<int>v;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='x')
         v.push_back(i);
    }
    long long n=v.size(),prev=0,sum=0;
    for(int i=n/2;i>0;i--)
    {
        sum=(prev+sum+v[i]-v[i-1]-1)%10000003;
        prev=prev+v[i]-v[i-1]-1;
    }
    prev=0;
    for(int i=n/2+1;i<v.size();i++)
    {
        sum=(sum+prev+v[i]-v[i-1]-1)%10000003;
        prev=prev+v[i]-v[i-1]-1;
    }
    return sum%10000003;
}