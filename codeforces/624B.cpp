#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long long >a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	if(a[n-1]==1)
	{
		cout<<1<<endl;
	}
	else
	{
	long long sum=a[n-1], g=INT_MAX;
	long long x=a[n-1];
	long long y=x;
	for(int i=n-2;i>=0;i--)
	{
		
		x=min(x-1,a[i]);
		if(x>=y || x<0)
		{
			break;
		}
		else
		{
			sum+=x;
		}
		y=x;
	}
	// for(int i=n-1;i>=0;i--)
	// {
	// 	if(a[i]<g)
	// 	{
	// 		long long x=a[i];
	// 		int f=0;
	// 		while(a[i]==x)
	// 		{
	// 			sum+=a[i]-f;
	// 			f++;
	// 			i--;
	// 		}
	// 		long long g=a[i]-f;
	// 		i++;
	// 	}
	// 	else
	// 	{
	// 		continue;
	// 	}
	// }
	cout<<sum<<endl;
}
}