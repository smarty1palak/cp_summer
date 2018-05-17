#include<bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
	return a>b?b:a;
}
int max(int a, int b)
{
	return a>b?a:b;
}
int func(int a[], int n)
{
	int l[n], m[n],i,j;
	l[0]=a[0];
	m[0]=a[0];
	for(i=1;i<n;i++)
	{
		l[i]=min(a[i],l[i-1]);	
	}
	for(j=1;i<n;i++)
	{
		m[i]=max(a[i],l[i-1]);	
	}
	i=0,j=0;
	int diff=-1;
	while(i<n&&j<n)
	{
		if(l[i]<=m[j])
		{
			diff=max(diff,(j-i));
			j++;
		}
		else
			i++;
	}
	return diff;
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<func(a,n)<<endl;
}