#include <iostream>
using namespace std;

int main()
{
    int temp, a, digit, rev = 0;
    cout << "Enter a positive number: ";
    cin>>a;
    temp=a;
    do
    {
        digit=a%10;
        rev=(rev*10)+digit;
        a=a/10;
    } while(a!=0);
    if (temp==rev)
    {
        cout<<"The number, "<<temp<<" is a palindrome.";
    }
	else
    {
        cout<<"The number, "<<temp<<" is not a palindrome.";
    }
    return 0;
}
