#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int x=n;
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum%4==0)
	{
		cout<<x;
	}
	else
	{

		while(sum%4!=0)
		{
			n=x+1;
			sum=0;
			x=n;
			while(n)
			{
				sum+=n%10;
				n=n/10;
			}
		}
		cout<<x;
	}

}