#include<iostream>
using namespace std;
void print (int A[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
}
int main () 
{
    int a;
    cout<<"How many elements you want to enter = ";   cin>>a;
    int arry[a];
    for (int i=0; i<a; i++)
    {
    	cout<<"Enter the element of array = ";   cin>>arry[i];
	}
	print (arry,a);
	for (int i=0,j=a-1; i<(a/2); i++,j--)
	{
		int tamp=arry[i];
		arry[i]=arry[j];
		arry[j]=tamp;
	}
	print (arry,a);
	return 0; 
}
