int Solution::titleToNumber(string A) {
    long long sum=0;
    for(int i=0;i<A.length();i++)
    {
        int x=int(A[i])-64;
        sum+=x*pow(26,A.length()-i-1);
    }
    return sum;
}