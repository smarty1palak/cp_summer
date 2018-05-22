#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int mask=0; mask < (1<<N)-1; mask++)

	{

	//Print subset corresponding to mask

	for(int j=0; j<N; j++)

		if(mask & (1<<j))

			printf("%d ", A[j]);

	printf("\n");

	}
}