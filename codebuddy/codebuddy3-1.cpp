// Problem 1:

// Given an integer array of n integers, find sum of bit differences in all pairs that can be formed from array elements. Bit difference of a pair (x, y) is count of different bits at same positions in binary representations of x and y.

// For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111 ( first and last bits differ in two numbers).

// Examples:

// Input: arr[] = {1, 2}

// Output: 4

// All pairs in array are (1, 1), (1, 2), (2, 1), (2, 2)

// Sum of bit differences = 0 + 2 + 2 + 0 = 4

// Input:  arr[] = {1, 3, 5}

// Output: 8

// All pairs in array are (1, 1), (1, 3), (1, 5), (3, 1), (3, 3) (3, 5), (5, 1), (5, 3), (5, 5)

// Sum of bit differences =  0 + 1 + 1 + 1 + 0 + 2 + 1 + 2 + 0 = 8



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,answer=0,j;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<32;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(a[j]&(1<<i))
			{
				count++;
			}
		}
		answer+=count*(n-count)*2;
	}
	cout<<answer<<endl;
}