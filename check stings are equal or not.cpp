#include<iostream>
using namespace std;
int main ()
{
	string s1,s2;
	cout<<"Enter first String : ";  getline(cin,s1);
	cout<<"Enter second String : ";  getline(cin,s2);
	if(s1==s2)
	{
		cout<<" Strings are Equal.";
	}
	else  
	{
		cout<<" Strings are not Equal. ";
	}
}
