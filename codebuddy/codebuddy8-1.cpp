#include<bits/stdc++.h>
using namespace std;

void calculate(int n, vector<string> &v)
{
    if(n==1)
    {
        v.push_back("0");
        v.push_back("1");
    }
    else
    {
        calculate(n-1,v);
        for(int i=v.size()-1;i>=0;i--)
        v.push_back(v[i]);
        for(int i=0;i<v.size()/2;i++)
        {
            v[i]="0"+v[i];
        }
        for(int i=v.size()/2;i<v.size();i++)
        {
            v[i]="1"+v[i];
        }
    }
    return ;
}

vector<int> grayCode(int A) {
    vector<string>v;
    vector<int>sol;
    calculate(A,v);
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=0;
        for(int j=v[i].length()-1;j>=0;j--)
        {
            if(v[i][j]=='1')
            {
                sum+=pow(2,v[i].length()-j-1);
            }
    
        }
        sol.push_back(sum);
    }
    return sol;
}

int main()
{
    int n;
    cin>>n;
    vector<int>sol;
    sol=grayCode(n);
    for(int i=0;i<sol.size();i++)
    {
        cout<<sol[i]<<endl;
    }
}