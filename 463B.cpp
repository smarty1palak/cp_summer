#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int h[n+3];
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
	}
	h[0]=0;
	long long sum=0,sum1=0;
	for(int i=0;i<n;i++)
	{
		sum1=sum1+h[i]-h[i+1];
		sum=min(sum,sum1);
	}
	cout<<abs(sum)<<endl;
}