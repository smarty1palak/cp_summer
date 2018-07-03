int Solution::candy(vector<int> &A) {
    long long prev=A[0];
    long long arr[A.size()];
    for(int i=0;i<A.size();i++)
      arr[i]=1;
    for(long long i=1;i<A.size();i++)
    {
        if(A[i-1]<A[i])
        {
            arr[i]=arr[i-1]+1;
        }
    }
    prev=A[A.size()-1];
    for(long long i=A.size()-2;i>=0;i--)
    {
        if(A[i]>A[i+1])
        {
            if(arr[i]<=arr[i+1])
                arr[i]=arr[i+1]+1;
        }
    }
    long long sum=0;
    for(long long i=0;i<A.size();i++)
     sum+=arr[i];
    return sum;
}