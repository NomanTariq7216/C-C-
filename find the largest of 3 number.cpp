#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	cout<<"Enter thired number = ";
	cin>>c;
	if (a>b&&a>c)
	cout<<"The largest number is = "<<a;
	else if (b>a&&b>c)
	cout<<"The largest number is = "<<b;
	else
	cout<<"The largest number is = "<<c;
	return 0;
}
