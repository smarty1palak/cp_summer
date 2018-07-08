#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t=10;
	long long h[100000], area[1000][100], max;
	while(1)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>h[i];
			area[i][i]=h[i];
		}
		max=INT_MIN;
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				area[i][j]=min(area[i][j-1],h[j]);
				if(area[i][j]*(j-i+1)>=max)
				{
					max=area[i][j]*(j-i+1);
				}
			}
		}
		cout<<max<<endl;
	}
}