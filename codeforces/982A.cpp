#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]-48 == 1 && s[i+1]-48 == 1)
		{
			c=-1;
			break;
		}
		else if (i+2<s.length())
		{
			if(s[i]-48 == 0 && s[i+1]-48 == 0 && s[i+2]-48==0)
			{
				c=-1;
				break;
			}
		}
	}
	if(s=="0" || s=="00")
	{
		c=-1;
	}

	if(s.length()>2)
	{
		if(s[0]-48==0 && s[1]-48==0)
		{
			c=-1;
		}
		if(s[s.length()-1]=='0' && s[s.length()-2]=='0')
		{
			c=-1;
		}
	}

	if(c==0)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}