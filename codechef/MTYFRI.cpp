#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k,A[10000],m[10000],to[10000];
	cin>>t;
	while(t--)
	{
		int g=0,h=0,u=0,motu=0,tomu=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			if(i%2==0)
			{
				m[g++]=A[i];
				motu+=A[i];
			}
			else
			{
				to[h++]=A[i];
				tomu+=A[i];
			}
		}
		//cout<<motu<<" "<<tomu;
		sort(m,m+50);
		sort(to,to+h);
		//cout<<h<<" "<<g;
		int diff=motu-tomu;
		if(diff<0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			int s=0,o=g-1;
			while(diff>=0)
			{
				if(s<h&&o>=0)
				{
				  u++;
				  diff-=2*(m[o--]-to[s++]);
				 // cout<<diff;
				}
				else 
				 break;
			}
			if(u<=k&&diff<0)
			   cout<<"YES"<<endl;
			else
			   cout<<"NO"<<endl;
		}
	}
}