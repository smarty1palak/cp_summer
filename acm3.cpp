#include<bits/stdc++.h>
using namespace std;
int isitaletter(char x)
{
	if(x>=65&&x<=90)
		return 1;
    else if(x>=97&&x<=122)
    	return 1;
    else return 0;
}
int isitanumber(char x)
{
	if(x>=48&&x<=57)
		return 1;
    else if(x=='+'||x=='-')
    	return 1;
    else return 0;
}
int main()
{
	ifstream myfile ("input.txt");
	int a,i=0,count=0,space=0,equal=0,keyword=0;
	char ch,prev='a';
    while (myfile >> noskipws >> ch)
    {
    	if(equal==1&&isitanumber(ch))
    	{
    		count++;
    		keyword=0;
    		equal=0;

    	}
        if(isitaletter(ch))
        {
        	if(keyword==1 &&equal==1)
        	{
        		keyword=0;
        		equal=0;
        	}
        	else
        	keyword=1;
        }
        else if(keyword==1&&(ch==' '||ch=='='))
        {
        	if(ch=='='&&equal==0)
        		equal=1;
        	else if(equal==1&&ch=='=')
        	{
        		keyword=0;
        		equal=0;
        	}

        }
        else
        {
        	keyword=0;
        }
     }
    ofstream fout;
	fout.open("output.txt");
	for(int i=0;i<1;i++)
		fout<<count<<endl;
	fout.close();
	return 0;
}