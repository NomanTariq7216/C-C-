#include <iostream>
using namespace std;
struct stu_dt
{
	int roll;
	char name[50];
	char Dept[50];
	char course[50];
	float CGPA;
} s[40];
int main()
{
	char c; int r;
	cout <<"Enter student inforation:\n";
	for(int i=0;i<40;i++)
	{
		cout <<"Enter roll no:";
		cin >> s[i] .roll;
		cout <<"\n enter name:";
		cin >> s[i] .name;
		cout << "\n enter department:";
		gets(s[i] .Dept);
		cout << " \n enter course title:";
		cin >> s[i] .course;
		cout << " \n Enter CGPA:";
		cin >> s[i] .CGPA;
		cout << " \n Go to the next student?[Y]ess/[N]o";
		cin >> c;
		if (c=='n'|| c=='N')
		break;
	}
	cout << " \n Enter roll no of student:";
	cin >> r;
	for (int j=0;j<40;j++)
	{
		if (r==s[j] .roll)
		{
			cout <<"name :" <<s[j] .name <<endl;
			cout <<"Department:"<<s[j] .Dept <<endl;
			cout << "Course:" <<s[j] .course <<endl;
			cout << "CGPA:" << s[j] .CGPA <<endl;
			break;
		}
	}
	return 0;
}
