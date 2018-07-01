#include<bits/stdc++.h> 

using namespace std;
struct cal
{
	int min,max;
	bool visit;
};

int main()
{
	int n;
	cin>>n;
	int a[n],mini=INT_MAX, maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mini=min(a[i],mini);
		maxi=max(a[i],maxi);
	}
	int size=(maxi-mini)/(n-1);
	int total=(maxi-mini)/size +1;
	struct cal bucket[total+1];
	for(int i=0;i<total;i++)
	{
		bucket[i].min=INT_MAX;
		bucket[i].max=INT_MIN;
		bucket[i].visit=false;
	}
	for(int i=0;i<n;i++)
	{
		int x=(a[i]-mini)/size;
		bucket[x].visit=true;
		bucket[x].min=min(bucket[x].min,a[i]);
		bucket[x].max=max(bucket[x].max,a[i]);
	}
	int prev=bucket[0].max;
	int ans=0;
	for(int i=1;i<total;i++)
	{
		if(bucket[i].visit==true)
		{
			ans=max(ans,bucket[i].min-prev);
			prev=bucket[i].max;
		}
		else
			continue;
	}
	cout<<ans<<endl;
}