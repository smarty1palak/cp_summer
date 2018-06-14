#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int s1=a*b +c;
	int s2=a+b*c;
	int s3=(a+b)*c;
	int s4=a*(b+c);
	int s5=a*b*c;
	int s6=a+b+c;
	int max1=max(s1,s2);
	int max2=max(s3,s4);
	int max3=max(max1,max2);
	int max4=max(max3,s5);
	int max5=max(max4,s6);
	cout<<max5<<endl;
}