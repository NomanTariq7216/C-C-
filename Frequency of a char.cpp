#include<iostream>
using namespace std;
int main ()
{
	char str[100], chr;
	int i=0,frequency=0;
	cout<<"Enter the string : ";  gets(str);
	cout<<"Enter the char which you want to find frequency : ";   cin>>chr;
	while (str[i])
	{
		if (chr==str[i])
		{
			frequency++;
		}
		i++;
	}
	cout<<"Frequency of "<<chr<<" is = "<<frequency;
	return 0;
}
