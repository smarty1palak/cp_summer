#include<bits/stdc++.h>

using namespace std;

int comb(int x, int y)
{
    int res = 1;
    for (int i = 1; i <= (x + y); i++)
        res = res * i; 
    for (int i = 1; i <= x; i++)
        res = res / i;
    for (int i = 1; i <= y; i++)
        res = res / i;
 
    return res;
}

void find(int x, int y, int k)
{
	if(x==0 && y==0)
		return ;
	else if(x==0)
	{
		cout<<"V";
		find(x,y-1,k);
	}
	else if(y==0)
	{
		cout<<"H";
		find(x-1,y,k);
	}
	else
	{
		if(k<=comb(x-1,y))
		{
			cout<<"H";
			find(x-1,y,k);
		}
		else
		{
			cout<<"V";
			find(x,y-1, k-comb(x-1,y));
		}
	}
}
int main()
{
	int x,y,k;
	cin>>x>>y>>k;
	find(x,y,k);
}