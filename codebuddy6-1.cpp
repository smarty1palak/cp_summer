#include<bits/stdc++.h>
using namespace std;
int ma[1000][1000];
int health[1000][1000];
int calculate(int m, int n)
{
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(i==m-1&&j==m-1)
            {
                health[i][j]=max(1, 1-ma[i][j]);
            }
            else if(i==m-1)
            {
                health[i][j]=max(1, health[i][j+1]-ma[i][j]);
            }
            else if(j==n-1)
            {
                health[i][j]=max(1, health[i+1][j]-ma[i][j]);
            }
            else
            {
                health[i][j]=max(1, min(health[i+1][j], health[i][j+1])-ma[i][j]);
            }
        }
    }
    return health[0][0];
    
}
int main()
{
    ios::sync_with_stdio(false);
    memset(health,0,sizeof(health));
    int m,n,i,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ma[i][j];
        }
    }
    cout<<calculate(m,n)<<endl;

    return 0;
}