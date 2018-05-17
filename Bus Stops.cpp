#include <bits/stdc++.h>

using namespace std;

double closest( double a, double b, double c)
{
    if(abs(c-b)>abs(c-a))
        return a;
    else
        return b;
}
int searchbus(double  x[], int l,int h, int key)
{
    if(key<=x[0])
        return x[0];
    if(key>=x[h-1])
        return x[h-1];
    while(l<=h)
    {
       int mid=(l+h)/2;
        if(x[mid]==key)
            return x[mid];
        else
        {
            if(key<x[mid])
            {
                if(key>x[mid-1])
                    return closest(x[mid-1], x[mid], key);
                h=mid;
            }
            else
            {
                if(key<x[mid+1])
                    return closest(x[mid], x[mid+1], key);
                l=mid+1;
            }
        }
    }
    return 0;
}


int main()
{
    double res;
    int n,q;
    double w,v,x[150000],p[150000],t[150000],u[150000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    cin>>w>>v;
    int total = (x[n-1]-x[0])/v;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>p[i]>>t[i]>>u[i];
    }
    for(int i=0;i<q;i++)
    {
        if(u[i]>=v)
        {
            res=t[i]+(x[n-1]-p[i])/u[i];
            printf("%0.9f",res);
        }
        else
        {
             int result=searchbus(x,0,n,p[i]);
             int time= abs(p[i]-result)/u[i] +t[i];
             int x1=0;
             while(time>=w*x1 + (p[i]-x[0])/v)
             {
                 x1++;
             }
            result= (p[i]-x[0])/v + w*x1 + (x[n-1]-result)/v;
            cout<<res<<endl;
        }
    }
    return 0;
}