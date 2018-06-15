#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,p,j,g=0;
	cin>>n>>p;
	char s[n+10];
	cin>>s;
	int flag=0;
	for(int i=0;i<strlen(s)-p;i++)
	{
		if(s[i]=='.'&&s[i+p]=='.')
			flag=1;
		else if(s[i]!=s[i+p])
			flag=1;
	}
	if(flag==0)
		cout<<"No"<<endl;
	else
	{
		for(int i=0;i<strlen(s)-p;i++)
		{
			if(s[i]=='.'&& s[i+p]=='.')
			{
				s[i]='0';
				s[i+p]='1';
			}
			else if(s[i]=='.')
			{
				s[i]=abs(1-s[i+p]+48)+48;
			}
			else if(s[i+p]=='.')
				s[i+p]=abs(1-s[i]+48)+48;
		}
		for(int i=0;i<strlen(s);i++)
			if(s[i]=='.')
				s[i]='0';
		cout<<s<<endl;
	}
}