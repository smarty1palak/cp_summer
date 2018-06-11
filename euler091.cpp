#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long sum=3*pow(n,2);
	int x=n/2;
	x=(x*(x+1))/2;
	sum+= 4*x;
	cout<<sum<<endl;
}