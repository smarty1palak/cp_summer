#include  <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long  l,r;
		cin>>l>>r;
		while((l|(l+1))<=r)
		{
			l|=(l+1);
		}
		cout<<l<<endl;
	}	
	return 0;
}