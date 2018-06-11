#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[105];
	cin>>s;
	if(strstr(s,"ABC")||strstr(s,"ACB")||strstr(s,"BAC")||strstr(s,"BCA")||strstr(s,"CAB")||strstr(s,"CBA"))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}