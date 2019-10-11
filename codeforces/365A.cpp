#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		map<int,int>m;
		int mini=INT_MAX;
		for(int j=0;j<10;j++)
		{
			m[j]=0;
		}
		while(a[i]!=0)
		{
			int x= a[i]%10;
			m[x]=1;
			a[i]=a[i]/10;
		}
		for(int j=0;j<10;j++)
		{
			if(m[j]==0)
			{
				mini=min(mini,j);
			}
		}
		if(mini>k)
		{
			count++;
		}
	}
	cout<<count<<endl;
}