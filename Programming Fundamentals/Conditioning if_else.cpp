#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int hours=1;
	int minutes=0;
	char ampm;
	char yourchoice;
	cout<<"In case of conversion to 24 hours from 12 hours enter 'A':"<<endl;
	cout<<"In case of conversion to 12 hours from 24 hours enter 'B':"<<endl;
	cin>>yourchoice;
	if (yourchoice=='A' || yourchoice=='B')
	{
		cout<<"Enter any number of Hours and minutes to be converted from 24 hours notation to 12 hours notation:"<<endl;
		cin>>hours;
		cin>>minutes;
	}
	else if ( hours<12)
	{
		cout<<hours<<""<<minutes<<"A.M"<<endl;
	}
	else if (hours ==12)
	{
		cout<<hours<<""<<minutes<<"P.M"<<endl;

	}
	else if (hours>12)
	{
		cout<<hours-12<<""<<minutes<<"P.M"<<endl;
	}
	else if (yourchoice=='B' || yourchoice=='b')
	{
		cout<<"Enter any number of Hours and minutes while considering the AM/PM[where 'A' stands for AM and 'P' stands for PM] state to be converted from 12 hours Notation to 24 hours Notation:"<<endl;
		cin>>hours;
		cin>>minutes;
		cin>>ampm;
	}
	else if (ampm=='P' && hours<=11)
	{
		cout<<hours<<":"<<minutes<<endl;
	}
	else if ( ampm=='P' && hours==12)
	{
		cout<<12<<":"<<minutes<<endl;
	}
	else if (ampm=='P' && hours>12)
	{
		cout<<hours+12<<":"<<minutes<<endl;
	}
	system ("pause");
	return 0;
}
