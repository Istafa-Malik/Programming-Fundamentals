#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
	cout<<"Please Enter number :: ";
    cin>>a;
    for(int i=a;i<=a+10;i++)
    {
        if (i % 2 != 0)
        {
            cout << "print odd integers" <<i<< endl;
            
        }
    }
    return 0;
}
