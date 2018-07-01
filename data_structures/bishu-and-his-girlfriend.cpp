#include<bits/stdc++.h>

using namespace std;

int n;
int visit[1001]={0};
vector<int> matrix[1001];
int level[1001];

void dfs( int s)
{
	for(int i=1;i<matrix[s].size();i++)
	{
		if(visit[matrix[s][i]]!=1)
		{
			visit[matrix[s][i]]=1;
			level[matrix[s][i]]=level[s]+1;
			dfs(matrix[s][i]);
		}
	}
}

int main()
{
	cin>>n;
	int x,y;
	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		matrix[x].push_back(y);
		matrix[y].push_back(x);
	}
	level[1]=0;
	for(int i=1;i<=n;i++)
	{
		if(visit[i]!=1)
		{
			dfs(i);
		}
	}
	int q;
	int mini=INT_MAX;
	cin>>q;
	int t;
	for(int i=0;i<q;i++)
	{
		cin>>x;
		if(level[x]<mini)
		{
			mini=level[x];
			t=x;
		}
		else if(level[x]==mini)
		{
			if(x<t)
			{
				t=x;
			}
		}
	}
	cout<<t<<endl;

}