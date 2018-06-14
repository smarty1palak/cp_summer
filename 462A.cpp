#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c=0;
	char ch;
	cin>>n;
	char v[101][101];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>ch;
			v[i][j]=ch;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int count=0;
			if(i-1>=0 && v[i-1][j]=='o')
				count++;
			if(i+1<n && v[i+1][j]=='o')
				count++;
			if(j-1>=0 && v[i][j-1]=='o')
				count++;
			if(j+1<n && v[i][j+1]=='o')
				count++;
			if(count%2!=0)
			{
				c=1;
				break;
			}
		}

	}
	if(c==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;	
}