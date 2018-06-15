#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,a,b;
	cin>>n>>m>>a>>b;
	if(n%m==0)
		cout<<0<<endl;
	else
	{
		long long x=n%m;
		long long abolish=x*b;
		long long build=(m-x)*a;
		cout<<min(abolish,build)<<endl;

	}

}