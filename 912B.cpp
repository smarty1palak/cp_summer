 #include<bits/stdc++.h>

using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	if(k==1)
	{
		cout<<n<<endl;
	}
	else
	{
		int c=0;
		while(n!=0)
		{
			n=n>>1;
			c++;
		}
		long long t=pow(2,c)-1;
		cout<<t;
	}
}