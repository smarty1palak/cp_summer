#include<bits/stdc++.h>
using namespace std;

long long calc(long long h[], int n)
{
	stack<int >s;
	int i=0;
	long long max=0,area;
	while(i<n)
	{
		if(s.empty()||h[s.top()]<=h[i])
		{
			s.push(i++);
		}
		else
		{
			int p=s.top();
			s.pop();
			if(s.empty())
				area=h[p]*i;
			else
				area=h[p]*(i-s.top()-1);
			if(area>max)
			max=area;
		}
		
	}
	while(s.empty()==false)
	{
		int p=s.top();
		s.pop();
		if(s.empty())
			area=h[p]*i;
		else
			area=h[p]*(i-s.top()-1);
		if(area>max)
		{
			max=area;
		}
	}
	return max;
}



int main()
{
	int n;
	//cin>>t;
	long long h[100000], max_area;
	cin>>n;
  while(n!=0){
    for(int j=0;j<n;j++)
      cin>>h[j];
    cout<<calc(h,n)<<endl;
    cin>>n;
  }
}