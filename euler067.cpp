#include<bits/stdc++.h>

using namespace std;
int dp[106][106], matrix[106][106],n;
int calculate(int i, int j)
{
	if(dp[i][j]!=-1)
	 return dp[i][j];
	if(i==n-1)
	 return matrix[n-1][j];
	return dp[i][j]=max(calculate(i+1,j), calculate(i+1,j+1))+matrix[i][j];
}

int main()
{
	int t;
	
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				cin>>matrix[i][j];
			}
		}
		cout<<calculate(0,0)<<endl;
	}
}