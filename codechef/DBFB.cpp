#include<iostream>

using namespace std;

long long l=1000000007;
int n;
long long fib(long long a, long long b)
{
  long long f[n+2];   // 1 extra to handle case, n = 0
  int i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = a;
  f[1] = b;
 
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = (f[i-1]%l + f[i-2]%l)%l;
  }
 
  return f[n];
}

int main()
{
	int t,m;
	long long a[100000], b[100000], result=0, sum1=0, sum2=0;
	cin>>t;
	while(t--)
	{
		long long sum1=0,sum2=0;
		cin>>m>>n;
		n=n-1;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			sum1=(sum1%l + a[i]%l)%l;
		}
		sum1= (sum1*(m%l))%l;
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			sum2=(sum2%l + b[i]%l)%l;
		}
		sum2= (sum2*(m%l))%l;
		result=fib(sum1,sum2);
		
		cout<<result<<endl;
	}
}