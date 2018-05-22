#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  n,x,i;
    cin>>n;
    long long t=n-1,number=0;
    vector<long long>A;
    stack<long long>v;
    vector<long long>a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        number=number+x*pow(10,t);
        t--;
    }
    number++;
    while(number!=0)
    {
        x=number%10;
        number=number/10;
        v.push(x);
    }
    t=v.size();
    for(i=0;i<t;i++)
    {
        x=v.top();
        A.push_back(x);
        v.pop();
    }
    for(i=0;i<t;i++)
    {
        cout<<A[i]<<" ";
    }
} 