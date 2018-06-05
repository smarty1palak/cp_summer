#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	cin>>n;
	cin>>s;
	char c[s.size()+1][10];
	string s1;
	int j=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1'||s[i]=='0')
		{
			strcpy(c[j++],"");
		}
		else if(s[i]=='2')
		{
			strcpy(c[j++],"2");
		}
		else if(s[i]=='3')
		{
			strcpy(c[j++],"3");
		}
		else if(s[i]=='4')
		{
			strcpy(c[j++],"322");
		}
		else if(s[i]=='5')
		{
			strcpy(c[j++],"5");
		}
		else if(s[i]=='6')
		{
			strcpy(c[j++],"53");
		}
		else if(s[i]=='7')
		{
			strcpy(c[j++],"7");
		}
		else if(s[i]=='8')
		{
			strcpy(c[j++],"7222");
		}
		else if(s[i]=='9')
		{
			strcpy(c[j++],"7332");
		}
	}
	for(int i=0;i<j;i++)
		s1+=c[i];
	sort(s1.begin(),s1.end());
	reverse(s1.begin(),s1.end());
	cout<<s1;
}