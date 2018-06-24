#include<bits/stdc++.h>

using namespace std;

int main()
{
	int c=0;
	cin>>x>>y;
	cin>>x1>>y1;
	if(x1>x)
	{
		x1++;
	}
	else if(x1<x)
		x1--;
	else if(x1==x)
	{
	    x1=2;
	    c=1;
	}
	if(y1>y)
		y1++;
	else if(y1<y)
		y1--;
	else if(y1==y)
	 {
	 	y1=2;
	 	c=1;
	 }
	 if(c==1)
	 {
	  cout<<x1*y1<<endl;
	 }
	 else
	  cout<<abs(2*(x1-x)*(y1-y))<<endl;

}