#include <iostream>
using namespace std;
int main()
{
	int CITY = 2,WEEK = 7;
    int temperature[CITY][WEEK];
    cout << "Enter all temperature for a week of first city and then second city. \n";
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
    cout<<"\n\n"<<"           Displaying Values\n\n";
    cout<<"\tDay1\tDay2\tDay3\tDay4\tDay5\tDay6\tDay7\n";
    for(int i=0; i<2; i++)
    {
    	cout<<"City "<<i+1;
    	for(int j=0; j<7; j++)
    	{
    		cout<<"\t"<<temperature[i][j];
		}
		cout<<endl;
	}
    return 0;
}
