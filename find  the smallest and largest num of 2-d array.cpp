#include<iostream>
using namespace std;
int main ()
{
	int a,b,max=0,min=0;
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
    max=arry[0][0];
    min=arry[0][0];
    for (int i=0; i<a; i++)
    {
    	for (int j=0; j<b; j++)
    	{
    		if (arry[i][j]>max)
    		{
    			max=arry[i][j];
			}
			if (arry[i][j]<min)
			{
				min=arry[i][j];
			}
		}
	}
	cout<<"Maximun Value is = "<<max<<endl;
	cout<<"Minimun Value is = "<<min<<endl;
	return 0;
}
