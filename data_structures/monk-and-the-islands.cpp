#include<bits/stdc++.h>

using namespace std;
int bfs(vector<int> matrix[] ,int visit[], queue<int> &q, int n)
{
	q.push(1);
	visit[1]=1;
	int level[n+1];
	level[1]=0;
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		for(int i=0;i<matrix[t].size();i++)
		{
			if(visit[matrix[t][i]]!=1)
			{
				level[matrix[t][i]]=level[t]+1;
				visit[matrix[t][i]]=1;
				q.push(matrix[t][i]);
			}
		}
	}
	return level[n];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> matrix[10001];
		int visit[n+1];
		queue<int>nodes;
		memset(visit,0,sizeof(visit));
		for(int i=1;i<=m;i++)
		{
			int x,y;
			cin>>x>>y;
			matrix[x].push_back(y);
			matrix[y].push_back(x);
		}
		cout<<bfs(matrix,visit,nodes, n)<<endl;
	}
}