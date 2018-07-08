int calculate(int n,vector<int>& dp)
{
    if(n==1)
    {
        return dp[1]=1;
    }
    else if(n==2)
    {
        return dp[2]=2;
    }
    else if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=calculate(n-1, dp)+calculate(n-2, dp);
}
int Solution::climbStairs(int A) {
    vector<int>dp;
    for(int i=0;i<=A;i++)
    {
        dp.push_back(-1);
    }
    int t=calculate(A,dp);
    return t;
}