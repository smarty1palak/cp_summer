#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	long long n,k,x,mid,j;
	cin>>n>>k;
	vector<long long >a;
	vector<long long >b;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]!=0)
		{
			long long y=a[i]-k;
			long long low1=std::lower_bound(a.begin()+n-i, v.end(), y);
			
		}

	}
	long long count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
			count++;
	}
	cout<<count<<endl;

}