#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
int main()
{
	long long n,x,y,i;
	cin>>n;
	vector<pair<int, int> >p;
	vector<pair<int, int> >p1;
	for(i=0;i<n;i++)
	{
		cin>>x;
		p.push_back(make_pair(x,i+1));
		cin>>y;
		p1.push_back(make_pair(y,i+1));
	}
	sort(p.begin(), p.end());
	int c=0;
	for(i=0;i<n-1;i++)
	{
		if(p1[i].first>=p1[i+1].first)
		{
			c=1;
			cout<<"hi"<<p1[i].first<<p1[i+1].first;
			break;
		}
	}
	if(c!=1)
	{
		sort(p1.begin(), p1.end());
		for(i=0;i<n-1;i++)
		{
			if(p[i].first>=p[i+1].first)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		{
			cout<<p[i].second<<" "<<p[i+1].second<<endl;
		}
		else
		{
			cout<<"-1 -1"<<endl;
		}
	}
	else
	{
		cout<<p1[i+1].second<<" "<<p1[i].second<<endl;
	}
}