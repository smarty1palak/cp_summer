#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int k=0,c=0,i,j,number;
	for(i=0;i<s.length();i++)
	{
		number=(s[i]-48);
		if(number%8==0)
		{
			c=1;
			goto l;
		}
		for(j=i+1;j<s.length();j++)
		{
			number=(s[i]-48)*10+(s[j]-48);
			if(number%8==0)
			{
				c=1;
				goto l;
			}
			for(k=j+1;k<s.length();k++)
			{
				number=(s[i]-48)*100+(s[j]-48)*10+(s[k]-48);
				if(number%8==0)
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
		cout<<"YES"<<endl;
		cout<<number<<endl;
	}
	else
		cout<<"NO"<<endl;
}