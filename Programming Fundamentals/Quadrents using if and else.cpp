#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x and y is :"<<endl;
	cin>>x;
	cin>>y;
	if (x==0 && y==0)
	{
		cout<<"It is origin:"<<endl;
	}
	else if (x>0 && y>0)
	{
		cout<<"It is First quadrant :"<<endl;
	}
	else if (x<0 && y>0)
	{
		cout<<"It is Second quadrant :"<<endl;
	}
	else if (x<0 && y<0)
	{
		cout<<"It is third quadrant :"<<endl;
	}
	else if (x>0 && y<0)
	{
		cout<<"It is forth quadrant:"<<endl;
	}
	else 
	{
		cout<<"No Quadrant:"<<endl;
	}
	system ("pause");
	return 0;
}
