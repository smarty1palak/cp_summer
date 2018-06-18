#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin>>A;
    int matrix[A+1][A+1];
    int k=1;
    vector< vector<int> > matrix1(A);
    int x=(A-1)/2;
    x=x+1;
    for(int i=0;i<x;i++)
    {
        for(int j=i;j<A-i;j++)
        {
            matrix[i][j]=k++;
        }
        for(int j=i+1;j<A-i;j++)
        {
            matrix[j][A-i-1]=k++;
        }
        for(int j=A-i-2;j>=i;j--)
        {
            matrix[A-i-1][j]=k++;
        }
        for(int j=A-i-2;j>i;j--)
        {
            matrix[j][i]=k++;
        }
    }
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<A;j++)
        {
            cout<<matrix[i][j];
            matrix1[i].push_back(matrix[i][j]);
        }
        cout<<endl;
    }
}