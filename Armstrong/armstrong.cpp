#include <iostream>
using namespace std;

int main() {
    int a,temp,r,result = 0;
    cout<<"Enter an integer: ";
    cin>>a;
    temp=a;
    while (temp!=0) 
	{
        r=temp%10;
        result+=r*r*r;
        temp/=10;
    }
    if (result==a)
    {
        cout<<a<<" is an Armstrong number.";
    }
	else
    {
        cout<<a<<" is not an Armstrong number.";
    }
    return 0;
}
