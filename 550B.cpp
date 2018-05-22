#include<bits/stdc++.h>

using namespace std;
long long min(long long a,long long b)
{
	return a>b?b:a;
}
long long max(long long a,long long b)
{
	return a>b?a:b;
}
int main()
{
	long long l,r,x,n,j;
	cin>>n>>l>>r>>x;
	long long a[n];
	for(long long  i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long  count=0,possible=0,sum,m,ma;
	for(long long mask=0;mask<(1<<n);mask++)
	{
		sum=0;
		count=0;
		m=INT_MAX;
		ma=INT_MIN;
		for(j=0;j<n;j++)
		{
			if(mask&(1<<j))
			{
				count++;
				sum+=a[j];
				m=min(m,a[j]);
				ma=max(ma,a[j]);
			}
		}
		if(ma-m>=x && count>=2 && sum>=l && sum<=r)
			possible++;
	}
	cout<<possible<<endl;
}