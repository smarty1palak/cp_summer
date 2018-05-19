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
	int l[n],i,j;
	l[0]=a[0];
	for(i=1;i<n;i++)
	{
		l[i]=min(a[i],l[i-1]);	
	}
	int diff=-1;
	j=n-1;
	i=n-1;
	while(i>=0&&j>=0)
	{
		if(a[j]>l[i])
		{
			 diff=max(diff,j-i);
			 i--;
		}
		else
			j--;
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