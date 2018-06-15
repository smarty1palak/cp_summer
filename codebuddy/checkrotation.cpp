#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=1;
	string s1,s2;
	cin>>s1>>s2;

	string s= s1+s1;
	if(s1.length()==s2.length())
	{
		if( s.find(s2)!=std::string::npos)
		{
	 		cout<<"TRUE"<<endl;
	 		c=0;
	 	}
	}
	if(c==1)
	 	cout<<"FALSE"<<endl;
}