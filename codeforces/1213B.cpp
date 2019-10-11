#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long mini=INT_MAX;
		for(int i=n-1;i>=0;i--)
		{
			mini=min(mini,a[i]);
			if(mini<a[i])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}
