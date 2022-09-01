#include <bits/stdc++.h>
using namespace std;
void printDiamond(int n)
{
    int space = n - 1;
    for (int i = 0; i < n; i+=2)
    {
        for (int j = 0;j < space; j++)
        {
		    cout << " ";
		}
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
		}
        cout << endl;
        space--;
    }
    space = 0;
    for (int i = n; i > 0; i-=2)
    {
        for (int j = -1; j <= space; j++)
        {
            cout << " ";
	 	}
        for (int j = 0;j < i;j++)
        {    
			cout << "*";
 		}
        cout << endl;
        space++;
    }
}
int main()
{
	int a;
	cout<<"Enter the width of Diamond = ";
	cin>>a;
    printDiamond(a);
    return 0;
}
