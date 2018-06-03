#include<bits/stdc++.h>

using namespace std;

int main()
{
	ifstream myfile ("input.txt");
	int a,i=0;
	vector<int>b;
    while (myfile >> a)
    {
        b.push_back(a);
    }
    sort(b.begin(),b.end());
    ofstream fout;
	fout.open("output.txt");
	for(int i=0;i<b.size();i++)
		fout<<b[i]<<endl;
	fout.close();
	return 0;
}