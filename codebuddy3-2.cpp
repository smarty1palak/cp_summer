// Problem 2:

// Given an positive integer n. Count the different numbers that can be generated using digits 1, 2, 3 and 4 such that digits sum is the number ‘n’. Here digit ‘4’ will be treated as ‘1’. For instance,

// 32 = 3 + 2 = 5

// 1341 = 1 + 3 + 1 + 1 = 6

// 441 = 1 + 1 + 1 = 3

// Note: Answer the value in mod = 10^9+7

#include<bits/stdc++.h>
using namespace std;

long long M=1000000007;
long long possible_numbers(long long n)
{
	long long comb_possible[n+5];
	comb_possible[1]=2;
	for(int i=2;i<=n;i++)
	{
		comb_possible[i]=0;
		for(int j=1;j<=3;j++)
		{
			if(i==j)
				comb_possible[i]=(comb_possible[i]%M+1%M)%M;
			else if(j==1)
				comb_possible[i]=((comb_possible[i]%M)+(2*comb_possible[i-1])%M)%M;
			else if(i>j)
				comb_possible[i]=((comb_possible[i]%M)+comb_possible[i-j]%M)%M;

		}
	}
	return comb_possible[n];
}

int main()
{
	long long n;
	cin>>n;
	long long ans=possible_numbers(n);
	cout<<ans<<endl;
}