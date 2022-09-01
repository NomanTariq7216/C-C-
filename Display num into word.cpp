#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	char a[400];
	cout<<"Enter the Number = ";
	cin>>a;
	int l= strlen(a);
	for(int i=0; i<l; i++)
	{
		int n = a[i];
		
		switch(n)
		{
			case '0':
				cout<<"ZERO"<<endl;
				break;
			case '1':
				cout<<"ONE"<<endl;
				break;
			case '2':
				cout<<"TWO"<<endl;
				break;
			case '3':
				cout<<"THREE"<<endl;
				break;
			case '4':
				cout<<"FOUR"<<endl;
				break;
			case '5':
				cout<<"FIVE"<<endl;
				break;
			case '6':
				cout<<"SIX"<<endl;
				break;
			case '7':
				cout<<"SEVEN"<<endl;
				break;
			case '8':
				cout<<"EIGHT"<<endl;
				break;
			case '9':
				cout<<"NINE"<<endl;
				break;
			default:
				cout<<"Your Input is not between 0 to 9"<<endl;
				break;
		}	
	}
}
