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
int main()
{
	ifstream myfile ("input.txt");
	int a,i=0,count=0;
	char ch,prev=-1;
    while (myfile >> noskipws >> ch)
    {
       if((!isitaletter(prev))&&isitaletter(ch))
       	 count++;
       	prev=ch;
	}
    ofstream fout;
	fout.open("output.txt");
	for(int i=0;i<1;i++)
		fout<<count<<endl;
	fout.close();
	return 0;
}