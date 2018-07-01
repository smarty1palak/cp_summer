#include<bits/stdc++.h>

using namespace std;

int n,m;
int visit[100001]={0};
vector<int> matrix[100001];
int parent[100001];
int child[100001]={0};

void dfs( int s)
{
	for(int i=1;i<matrix[s].size();i++)
	{
		child[s]++;
		if(visit[matrix[s][i]]!=1)
		{
			parent[matrix[s][i]]=s;
			visit[matrix[s][i]]=1;
			dfs(matrix[s][i]);
		}
	}
}

int main()
{
	cin>>n>>m;
	int x,y;
	while(m--)
	{
		for(int i=0;i<n-1;i++)
		{
			cin>>x>>y;
			matrix[x].push_back(y);
			matrix[y].push_back(x);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(visit[i]!=1)
		{
			dfs(i);
		}
	}
	int happy=0;
	for(int i=2;i<=n;i++)
	{
		if(child[parent[i]]>child[i])
		{
			happy++;
		}
	}
	cout<<happy<<endl;

}