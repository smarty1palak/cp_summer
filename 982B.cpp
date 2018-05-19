#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,t;
	vector<pair <int,int> >p;
	stack<int>q;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		p.push_back(make_pair(x,i+1));
	}
	sort(p.begin(),p.end());
	int k=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			q.push(p[k].second);
			cout<<p[k++].second<<" ";
		}
		else
		{
			cout<<q.top()<<" ";
			q.pop();
		}
	}
}