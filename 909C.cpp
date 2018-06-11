#include<bits/stdc++.h>

using namespace std;
long long m=1000000007;
int main()
{
	long long n,sum=0,i,k,l;
	cin>>n;
	long long a[n+100][n+100]={0};
	char ch;
	a[0][0]=1;
	long long j=0;
	for(i=0;i<n;i++)
	{
		cin>>ch;
		if(ch=='f')
		{
			a[i+1][0] = 0;
            for(j = 1; j <= n; j++) {
                a[i+1][j] = a[i][j-1];
                a[i+1][j] %= m;
            }
		}

		else
		{
			sum = 0;
            for(j = n-1; j >= 0; j--) {
                sum += a[i][j];
                sum %= m;

                a[i+1][j] = sum;
                a[i+1][j] %= m;
            }
		}
	}
	sum=0;
	for(j=0;j<n;j++)
	{
		sum=(sum+a[n-1][j])%m;
	}
	cout<<sum<<endl;
}