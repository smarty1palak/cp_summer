#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	double first,second,x,a,b;
	cin>>t;
	while(t--)
	{
		first=0;
		second=0;
		cin>>n>>a>>b;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x==a)
			{
				first++;
			}
			if(x==b)
			{
				second++;
			}
		}
		double mul= (first/n)*(second/n);
		cout<<mul<<endl;
	}
}