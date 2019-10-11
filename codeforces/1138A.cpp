#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int t[n];
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	int x=t[0],e=0,i=0;
	while(t[i]==x)
	{
		e++;
		i++;
	}
	int u=0,ans=0, ansi=INT_MIN;
	for(int j=i;j<n;)
	{
		int y=t[j];
		while(t[j]==y)
		{
			u++;
			j++;
		}
		ans= min(e,u);
		ansi=max(ansi,ans);
		e=u;
		u=0;
	}
	cout<<2*ansi<<endl;
}