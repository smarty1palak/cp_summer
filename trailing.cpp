#include<iostream>

using namespace std;
int main()
{
	int A;
	cin>>A;
	int sum=0,x=1,count=0,t=2;
    while(5*x<=A)
    {
        count++;
        int t=x;
        while(t>1)
        {
            if(t%5==0)
            {
                t=t/5;
                count++;
            }
            else
            {
                break;
            }
        }
        x++;
    }
    cout<<count;
}