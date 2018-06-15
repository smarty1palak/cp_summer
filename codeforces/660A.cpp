#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n+5], b[2*n +10];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=1,count=0;
	b[0]=a[0];
	for(int i=0;i<n-1;i++)
	{
		if(__gcd(a[i],a[i+1])==1)
		{
			b[k]=a[i+1];
			k+=1;
		}
		else
		{
			count++;
			b[k]=1;
			b[k+1]=a[i+1];
			k+=2;
		}

	}
	cout<<count<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}

}