#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,k,x;
	cin>>n>>m>>k;
	long long a[n+1]={0};
	long long cost[k+1], calc[k+1];
	for(int i=0;i<m;i++)
	{
		cin>>x;
		a[x]=1;
	}
	for(int i=1;i<=k;i++)
	{
		cin>>cost[i];
	}
	long long min=INT_MAX, g=0;
	for(int i=1;i<=k;i++)
	{
		long long count=0;
		int c=0;
		for(int j=0;j<n;j+=i)
		{
			if(a[j]==1)
			{
				c=1;
				break;
			}
			else
			{
				count++;
			}
		}
		if(c==0)
		{
			g=1;
			calc[i]=count*cost[i];
			if(min>calc[i])
				min=calc[i];
		}
		else
		{
			calc[i]=-1;
		}

	}
	if(g==1)
		cout<<min<<endl;
	else 
		cout<<"-1"<<endl;
}