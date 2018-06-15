#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s1[10],s2[10];
	scanf("%s%s",s1,s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	cout<<s1[0];
	for(int i=1;i<l1;i++)
	{
		if(s1[i]-s2[0]<0)
			cout<<s1[i];
		else
		{
			break;
		}
	}
	cout<<s2[0]<<endl;
}