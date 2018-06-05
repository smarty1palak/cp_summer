#include <bits/stdc++.h>
using namespace std;
int main(void) {
	string s;
	string s1="0000000";
	string s2="1111111";
	cin>>s;
	if (s.find(s1) != std::string::npos||s.find(s2) != std::string::npos) 
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}