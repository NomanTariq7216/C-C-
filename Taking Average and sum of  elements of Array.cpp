#include<iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"How many number you want to Add and take Average = ";  cin>>a;
	int arry[a];
	int sum=0;
	for (int i=1; i<=a; i++)
	{
		cout<<"Enter the number = ";
		cin>>arry[i];
	}
	for(int i=1; i<=a; i++)
	{
		sum+=arry[i];
	}
	cout<<"Sum = "<<sum<<endl;
	float avrg= float(sum)/a;
	cout<<"Avrg = "<<avrg<<endl;
	return 0;
}
