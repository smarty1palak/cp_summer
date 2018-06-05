#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long t,n;
	long long a[100001];
	long long sum[100001]={0};
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]==-1)
				sum[i]=sum[i-1]+1;
			else
				sum[i]=sum[i-1];
		}
		long long rsult=INT_MAX;
		for(long long i=1;i<=n-1;i++)
		{
			rsult=min(rsult,(i-sum[i])+(sum[n]-sum[i]));
		}
		cout<<rsult<<endl;
	}
	
}