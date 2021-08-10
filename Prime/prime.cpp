#include <iostream>
using namespace std;

int main() 
{
    int i, a;
    bool p = true;
    cout<<"Enter a number: ";
    cin>>a;
    if (a==0 || a==1) 
	{
        p=false;
    }
    else {
        for (i=2; i<=a/2; ++i) {
            if (a%i==0) 
			{
                p=false;
                break;
            }
        }
    }
    if (p)
    {
        cout<<a<<" is a prime number";
    }
	else
	{
        cout<<a<<" is not a prime number";
    }
    return 0;
}
