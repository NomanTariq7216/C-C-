#include <iostream>
using namespace std;
const int row=2,colum=2;
void store(int A[row][colum],int arry_no)
{
	
	for(int i=0; i<row; i++)
	{
		for (int j=0; j<colum; j++)
		{
			cout<<"Enter the Elements of Array "<<arry_no<<" = ";
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
	int arry1[2][2],arry2[2][2],arry3[2][2];
	store(arry1,1);
	print(arry1);
	store(arry2,2);
	print(arry2);
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			arry3[i][j]=arry1[i][j]+arry2[i][j];
		}
	}
	cout<<"\nAddition is : \n\n";
	print (arry3);
}

