#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n, a[1000],  deleted, max, min ,count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int c=0;
		int min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		count=0;
		if(min!=1)
		{
			for(int j=0;j<n;j++)
					{
			    		if(a[j]%min==0)
			    		count++;
					}
					if(count==n)
					{
						c=1;
						goto l;
					}
		for(int i=2;i<=sqrt(min);i++)
		{
			count=0;
				if(min%i==0)
				{
					for(int j=0;j<n;j++)
					{
			    		if(a[j]%i==0)
			    		count++;
					}
					if(count==n)
					{
						c=1;
						goto l;
					}
				}
		
		}
	    }
		l:
		if(c==1)
		{
				cout<<"-1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}