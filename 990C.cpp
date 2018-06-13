#include<bits/stdc++.h>
using namespace std;
long long a[300000];
long long b[300000];
int main()
{
	long long n,count=0;
	string s;
	memset(b,0,sizeof(b));
	memset(a,0,sizeof(a));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		int x=0;
		if(s[0]==')'&&s[s.length()-1]=='(')
			continue;
		
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='(')
			{
				x=x-1;
			}
			else
			{
				x=x+1;
			}
		}
		if(x==0)
		{
			for(int j=0;j<s.length()-1;j+=2)
			{
				if(s[j]==')'&&s[j+1]=='(')
					a[0]--;
			}
			a[0]++;
		}
		else
		{
			if(x>0)
				a[x]++;
			else
				b[abs(x)]++;
		}
	}
	long long sum=0;
	for(int i=1;i<3*1e5;i++)
	{
		sum+=a[i]*b[i];
	}
	sum+=a[0]*(a[0]);
	cout<<sum<<endl;

}