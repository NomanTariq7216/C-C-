#include<iostream>
using namespace std;
int main ()
{
	float sum=0,Averg=0;
	int a,b;
	cout<<"Enter the rows of Array = ";  cin>>a;
	cout<<"Enter the columns of Array = ";  cin>>b;
	int arry[a][b];
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			cout<<"Enter the Elements of Array = ";  cin>>arry[i][j];
		}
	}
	cout<<"Elements of Array is : \n";
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			cout<<"\t"<<arry[i][j]<<"\t";
		}
		cout<<endl;
    }
    {
	for (int i=0; i<a; i++)
		{
			for (int j=0; j<b; j++)
		    sum+=arry[i][j];
		}
	}
	cout<<"Sum is = "<<sum<<endl;
	Averg=sum/(a*b);
	cout<<"Average is = "<<Averg;
} 
