#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c=0,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			j++;
		}
	}
	for(i=j;i<n;i++)
	{
		if(abs(a[i])<=(n-j))
		{
			a[abs(a[i])+j-1]=-a[abs(a[i]+j-1)];
		}
	}
	for(i=j;i<n;i++)
	{
		if(a[i]>0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
		cout<<i-j+1<<endl;
	else
		cout<<n-j+1<<endl;

}