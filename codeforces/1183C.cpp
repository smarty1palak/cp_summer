#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long k,n,a,b;
		cin>>k>>n>>a>>b;
		long long m=k-1,o;
		o=m-b*n;
		long long x= a-b;
		if((a-b <0 && o>0) || (a-b>0 && o<0))
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<min(n,o/x)<<endl;
		}
	}
}