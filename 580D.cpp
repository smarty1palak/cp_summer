#include<bits/stdc++.h>
using namespace std;
long long benefit[21][21];
long long dp[1<<18][20];
long long a[21];
int n,m,k;
long long calculate(int mask,int prev)
{
	if(__builtin_popcount(mask)==m)
		return 0;
	if(dp[mask][prev]!=-1)
		return dp[mask][prev];
	long long answer=-1;
	for(int i=0;i<n;i++)
	{
		if(mask&(1<<i))
			continue;
		answer=max(answer,calculate(mask|(1<<i),i)+benefit[prev][i]+a[i]);
	}
	dp[mask][prev]=answer;
	return answer;
}
int main()
{
	long long x,y,z;
	memset(benefit,0,sizeof(benefit));
	memset(dp,-1,sizeof(dp));
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++)
	{
		cin>>x>>y>>z;
		benefit[x-1][y-1]=z;
	}
	long long ans=calculate(0,19);
	cout<<ans<<endl;
}