#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	string str;  //string
	int flag=0;  
	cout<<"Enter the number : ";
	cin>>str;
	
	int n = str.length();
	
	for(int i=0; i<n; i++)
	{ 
		if(str[i] != str[n-i-1])
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Number is not a palindrome"<<endl;
	}
	else
	{
		cout<<"Number is a palindrome";
	}
	
	return 0;
	
}
