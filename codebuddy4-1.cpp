// Problem 1: 
// Write a function to add 2 numbers without using '+' or any other arithmetic operator
#include  <iostream>

using namespace std;
int carry=1;

int add_without_arithmetic_operator(int a, int b)
{
	if(b!=0)
	{
		int carry=a&b;
		a=a^b;
		b=carry<<1;
		return add_without_arithmetic_operator(a,b);
	}
	else
		return a;
	
}
int main()
{
	int a,b;
	cin>>a>>b;
	int result=add_without_arithmetic_operator(a,b);
	cout<<result<<endl;
}