#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    int k;
    vector<int> v;
	cin>>s;
	cin>>k;
	cin>>a;
	int  prev=0,i,j,equal=0,index=0;
	int count=0,c=0;
	for(i=0;i<s.length();i++)
	{
		for(j=0;j<a.length();j++)
		{
			if(s[i]==a[j])
			{
				equal=1;
				if(j>=prev)
				{
					c=1;
					count++;
					prev=j;
					break;
				}
				break;
			}
		}
		if(c==0)
				{
					v.push_back(count);
					if(equal)
						count=1;
					else		
					    count=0;
					prev=index;
				}
				c=0;
	}
	if(v.empty())
	{
		cout<<count<<endl;
	}
	else
	{
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		cout<<v[0]<<endl;
	}
}