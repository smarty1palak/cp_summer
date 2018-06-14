#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s[1000];
	cin.getline(s,1000);
	set<char>s1;
	for(int i=1;i<strlen(s)-1;i+=3)
	{
		s1.insert(s[i]);
	}
	cout<<s1.size()<<endl;
}