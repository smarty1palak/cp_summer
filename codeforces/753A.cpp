#include<bits/stdc++.h>

using namespace std;
vector<int>dp;
int a[10000000000];
void calculate(int n)
{
	for(int i=1;i<=n;i++)
	{
		n=n-i;
		dp.push_back(i);
	}
	dp[dp.size()-1]+=n;
	cout<<dp.size()<<endl;
	for(int i=0;i<dp.size();i++)
		cout<<dp[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	calculate(n);
	
}