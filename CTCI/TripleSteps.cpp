#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int calculate(int n)
{
	if(n==1)
	 return dp[1]=1;
	else if(n==2)
	 return dp[2]=2;
	else if(n==3)
	 return dp[3]=4;
	else if(dp[n]!=-1)
	 return dp[n];
	return dp[n]=calculate(n-1)+calculate(n-2)+calculate(n-3);
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	cout<<calculate(n)<<endl;
}