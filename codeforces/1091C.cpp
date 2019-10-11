#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long h;
	h= (n*(n+1));
	h=h/2;
	vector<long long >ans;
	if(n%2==0)
	{
		long long h1;
		long long x= n/2;
		x=x*(2+(n/2-1)*2);
		x=x/2;
		long long y= h/2;
		long long d= y-x;
		
		while(h!=1)
		{
			ans.push_back(h);
			h= h/2-d;
		}
		ans.push_back(1);
	}
	else
	{
		ans.push_back(h);
		ans.push_back(1);
	}
	reverse(ans.begin(), ans.end());
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}