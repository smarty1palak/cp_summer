#include<iostream>

using namespace std;

int main()
{
	int t,n;
	long long result=0,A[100001];
	cin>>t;
	while(t--)
	{
		result=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>A[i];
			A[i]=2*A[i];
			result=result^A[i];
		}
		cout<<result<<endl;
	}
	return 0;
}