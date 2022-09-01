#include<iostream>
using namespace std;
const int row=3,colum=3;
void store(int A[row][colum],int arry_no)
{
	
	for(int i=0; i<row; i++)
	{
		for (int j=0; j<colum; j++)
		{
			cout<<"Enter the 9 Elements of Array "<<arry_no<<" = ";
			cin>>A[i][j];
		}
	}
}
void print (int B[row][colum])
{
	for (int i=0; i<row; i++)
	{
		for (int j=0; j<colum; j++)
		{
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	int sum=0;
	int arry1[3][3],arry2[3][3],arry3[3][3];
	store (arry1,1);
	print (arry1);
	store (arry2,2);
	print (arry2);
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			sum=0;
			for (int k=0; k<3; k++)
			{
				sum=sum+(arry1[i][k]*arry2[k][j]);
			}
			arry3[i][j]=sum;
		}
	}
	cout<<"\nMultiplication Result:\n";
	print (arry3);
}
