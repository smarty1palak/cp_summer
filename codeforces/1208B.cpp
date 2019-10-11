#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n];
	int flag=0,l1=-1,r1=-1, l2=-1, r2=-1;
	map<long long, int>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m.insert({a[i],0});
	}
	for(int i=0;i<n;i++)
	{
		if(m[a[i]]==0)
		m[a[i]]++;
		else
		{
			if(flag==0)
				l1=i;
			else
			{
				r1=i;				
			}
		}
	}
	
	flag=0;
	for(int i=n-1;i>=0;i--)
	{
		if(m[a[i]]==0)
		m[a[i]]++;
		else
		{
			if(flag==0)
				r2=i;
			else
			{
				l2=i;
			}
		}
	}
	if(l1==-1)
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<max(abs(r1-l1+1), abs(r2-l2+1))<<endl;
	}
}