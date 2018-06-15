int Solution::hammingDistance(const vector<int> &A) {
    long long answer=0;
    long long m=1000000007;
    for(int i=0;i<32;i++)
    {
        int count=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]&(1<<i))
            {
                count++;
            }
        }
        answer=((answer%m)+((count%m)*(((A.size()-count)%m)*2)%m)%m)%m;
    }
    return answer;
}