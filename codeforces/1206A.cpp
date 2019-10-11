#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int maxi1=INT_MIN, maxi2=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		maxi1=max(maxi1,a[i]);
	}
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		maxi2=max(maxi2,b[i]);
	}
	cout<<maxi1<<" "<<maxi2<<endl;
}