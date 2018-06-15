#include<bits/stdc++.h>

using namespace std;

long long length(long long x)
{
	int count=0;
	while(x)
	{
		count++;
		x=x/10;
	}
	return count;
}
int main()
{
	long long n,sum=0;
	cin>>n;
	long long x=length(n);
	long long t=pow(2,x)-1;
	int i=0;
	while(n)
	{
		x=n%10;
		if(x==7)
		{
			sum+=pow(2,i);
		}
		i++;
		n=n/10;
	}
	cout<<sum+t<<endl;
}