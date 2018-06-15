#include<bits/stdc++.h>
using namespace std;
int dp[105][1<<17];
int b1[105][1<<17];
int mask[65];
int a[105];
int main()
{
	int n,x;
	cin>>n;
	memset(dp,0,sizeof(dp));
	memset(b1,0,sizeof(b1));
	memset(mask,0,sizeof(mask));
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[i]=x;
	}
	int p[17]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
	for(int i=1;i<=n;i++)
	{
		for(int b=1;b<60;b++)
		{
			for(int k=0;k<17;k++)
			{
				if(b%p[k]==0)
				{
					mask[b]=mask[b]&(1<<(16-k));
				}
			}
			int x=(~mask[b]);
			for(int s=x;s>=0;s=(s-1)&x)
			{

				dp[i][s|mask[b]]=min(dp[i][s|mask[b]], dp[i-1][s]+abs(a[i]-b));	
				b1[i][s|mask[b]]=b;
		
			}
		}
		
	}
	for(int i=1,s=1;i<=n;i++)
	{
		cout<<b1[i][s]<<" ";
		s=s|mask[s];
	}
	cout<<endl;

}