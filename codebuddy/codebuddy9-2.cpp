#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    vector<int>A;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        A.push_back(x);
    }

    vector< vector<int> >v;
   
    int B=0, first,b=A[0],c=A[0];
    sort(A.begin(), A.end());
    for(int i=0;i<A.size(); i++)
    {
        first=A[i];
        int l=i+1, r=A.size()-1, a=A[0];
        while(l<r)
        {
            
            if(first+A[l]+A[r]==0 )
            {
                //cout<<first<<A[l]<<A[r]<<endl;
                vector<int>v1;
                v1.push_back(first);
                v1.push_back(A[l]);
                v1.push_back(A[r]);
                v.push_back(v1);
                v1.erase(v1.begin(),v1.end());
                l++;
                while(A[l]==A[l-1])
                {
                    l++;
                }
            }
            else if(first+A[l]+A[r]>0)
            {
                r--;
            }
            else if(first+A[l]+A[r]<0)
            {
                l++;
            }
        }
        while(A[i+1]==A[i] && i+1<A.size())
        {
            i++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}