#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,x1,y1;
	cin>>x>>y;
	cin>>x1>>y1;
	if(x1>x)
		x1++;
	else if(x1<x)
		x1--;
	else if(x1==x)
	{
	    x1=2;
	    x=0;
	}
	if(y1>y)
		y1++;
	else if(y1<y)
		y1--;
	else if(y1==y)
	{
	 	y1=2;
	 	y=0;
	}
	cout<<2*(abs(x1-x)+abs(y1-y))<<endl;

}