#include<bits/stdc++.h>

using namespace std;
int n;
int calculate(int a[], int i)
{
	int profit[n]={0}, mini=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<mini)
		{
			mini=a[i];
		}
		profit[i]=max(profit[i-1],a[i]-mini);
	}
	int maxi=a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]>maxi)
		{
			maxi=a[i];
		}
		profit[i]=max(profit[i+1],profit[i]+maxi-a[i]);
	}
	return profit[0];
}

int main()
{
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<calculate(a,n)<<endl;

}