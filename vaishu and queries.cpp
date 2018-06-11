#include<bits/stdc++.h>
using namespace std;
int n;
int visit[1000];
int dp[105][105][105];
int R[1000], B[1000];
int ans=-100000;
int calculate(int prev, int r, int b)
{
	if(prev>=n)
		return 0;
	if(r==0 && b==0)
		return 0;
	if(dp[prev][r][b]!=0)
		return dp[prev][r][b];
	int count=0;

	for(int i=prev+1;i<n;i++)
	{
			if(r-R[i]>=0 && b-B[i]>=0)
			{
				count = max(count,1+ calculate(i,r-R[i], b-B[i]));
			}
	}
	return dp[prev][r][b]=count;
}

int main()
{
	memset(R,0,sizeof(R));
	memset(B,0,sizeof(B));
	memset(dp,0,sizeof(dp));
	cin>>n;
	int r,b,q;
	string s;
	int answer;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='R')
				R[i]++;
			else
				B[i]++;
		}
	}
	for(int i=1;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			for(int k=0;k<100;k++)
			{
				dp[i][j][k]=dp[i-1][j][k];
				if(j-R[i]>=0&& k-B[i]>=0)
				{
					dp[i][j][k]=max(dp[i-1][j][k],dp[i][j-R[i]][k-B[i]]+1);
				}
			}
		}
	}
	cin>>q;
	while(q--)
	{
		cin>>r>>b;
		int answer=dp[n-1][r][b];
		cout<<answer<<endl;
	}	
}