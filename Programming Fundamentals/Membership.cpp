#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float totalcost;
	int choice;
	float cost=10000;
	cout<<"General information:"<<endl;
	cout<<"The senior citzens discount is 30%:"<<endl;
	cout<<"If the membership is bought and paid for 12 or more months,the discount is 15%:"<<endl;
	cout<<"Press 1 : For senior citizens:"<<endl;
	cout<<"Press 2 :If paid for 12 or more months:"<<endl;
	cout<<"Press 3: If more than five personal training sessions are bought:"<<endl;
	cout<<"Enter your choice :"<<endl;
	cin>>choice;
	if (choice=='1')
	{
		totalcost=cost*0.70;
		cout<<"The membership cost for you is :"<<totalcost<<endl;
	}
	else if ( choice=='2')
	{
		totalcost=cost*0.85;
		cout<<"The membership cost for you is :"<<totalcost<<endl;
	}
	else if (choice =='3')
	{
		totalcost=cost*0.80;
		cout<<"The membership cost for you is :"<<totalcost<<endl;
	}
	else 
	{
		cout<<"Wrong choice:"<<endl;
	}
	system ("pause");
	return 0;
}
