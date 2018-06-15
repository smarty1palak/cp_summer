#include<bits/stdc++.h>

using namespace std;
long long m=1000000007;
int main()
{
	long long b_count=0,totalno_of_steps=0;
	string s;
	cin>>s;
	int l=s.length();
	for(long long i=l-1;i>=0;i--)
	{
		if(s[i]=='b')
		{
			b_count=(b_count%m+1)%m;
		}
		if(s[i]=='a'&&s[i+1]=='b'&&i!=l)
		{
			totalno_of_steps=(totalno_of_steps%m+b_count%m)%m;
			b_count=(2*(b_count%m))%m;
			s[i]='b';
			//cout<<no_of_steps<<endl;
		}
	}
	cout<<totalno_of_steps<<endl;
}