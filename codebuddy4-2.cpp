// Problem 2 :
// Given an N x N matrix, find an algorithm to rotate the matrix by 90 degrees (clockwise). Do not use more than O(1) additional space.
// Ex: 
// Matrix = 
// [ 1 0 3
//  2 1 5
//  6 7 8 ]
 
// Rotated Matrix =
// [ 6 2 1
//  7 1 0
//  8 5 3 ]

#include  <iostream>

using namespace std;

int main()
{
	int b,n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n-1-i;j++)
		{
			int temp=a[i][j];
			a[i][j]=a[n-1-j][i];
			a[n-1-j][i]=a[n-1-i][n-1-j];
			a[n-1-i][n-1-j]=a[j][n-1-i];
			a[j][n-1-i]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
	    cout<<endl;
	}
}