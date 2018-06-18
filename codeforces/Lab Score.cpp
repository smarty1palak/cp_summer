#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k1,k2,k,error=0;
	cin>>n>>k1>>k2;
	k=k1+k2;
	long long a[n], b[n], c[n], sum1=0, sum2=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]=abs(a[i]-b[i]);
		error+=pow(c[i],2);
	}
	sort(c,c+n);
	for(int i=k;i>=1;i--)
	{
		sort(c,c+n);
		if(c[n-1]!=0 && error>0)
		{
			error=error-2*c[n-1]+1;
			c[n-1]--;
		}
		else
		{
			if(i%2==0)
				error++;
			else
				error--;
		}
	}
	if(abs(error)==0)
		cout<<"150"<<endl;
	else
		cout<<(100/abs(error))<<endl;

}