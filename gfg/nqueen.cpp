#include<bits/stdc++.h>

using namespace std;
int board[100][100];
int n;
bool attacked(int i, int j)
{
	for(int k=0;k<n;k++)
	{
		if(board[i][k]==1)
		{
			return true;
		}
		if(board[k][j]==1)
		{
			return true;
		}
	}
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<n;l++)
		{
			if((k+1)==(i+j))
			{
				if(board[k][k]==1)
					return true;
			}
			if((k-l)==(i-j))
			{
				if(board[k][l]==1)
				  return true;
			}
		}
	}
	return false;

}

bool queen(int x)
{
	if(x==0)
	 return true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(attacked(i,j)==true)
				continue;
			else
			{
				board[i][j]=1;
				if(queen(x-1)==true)
					return true;
				else
				board[i][j]=0;
			}
		}
	}
	return false;
}
int main()
{
	memset(board,0,sizeof(board));
	cin>>n;
	bool ans=queen(n);
	if(ans==true)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				{
					cout<<board[i][j];
				}
				cout<<endl;
		}
	}
	else
		cout<<"NO"<<endl;
}