#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long n,m;
		cin>>n>>m;
		long long k= n/m;
		long long x= k/10;
		long long y=k%10;
		long long rem[10];
		long long sum=0;
		for(int i=0;i<10;i++)
		{
			rem[i]= ((i+1)*m)%10;
			sum+=rem[i];
		}

		long long ans;
		ans = x*sum;
		for(int i=0;i<y;i++)
		{
			ans+=rem[i];
		}
		cout<<ans<<endl;
	}
}