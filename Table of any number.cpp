#include<iostream>
using namespace std;
int main()
{
	int a,i,product;
	cout<<"Enter a number = ";
	cin>>a;
	for (i=1; i<=10 ; i++)
	{
		product = a*i;
		cout<<a<< " * " <<i<< " = "<< product<<endl;
	}
	return 0;
}
