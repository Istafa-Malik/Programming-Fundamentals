#include<iostream>
#include<string>
using namespace std;
int larger(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int larger(int a, int b, int c)
{
	return larger(a,larger(b,c));
}
int larger(int a, int b, int c, int d)
{
	return larger(a,larger(b,c,d));
}
int larger(int a, int b,int c, int d, int e)
{
	return larger(a, larger(b,c,d,e));
}
void main()
{
	cout<<larger(4,5)<<endl;
	cout<<larger(56,78,11)<<endl;
	cout<<larger(4,6,7,5)<<endl;
	system("pause");
}
