#include <iostream>
using namespace std;

int main() 
{    
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >>a>>b>>c;
    if(a >= b && a >= c)
    {
        cout << "Largest number is: " << a;
    }
	if(b >= a && b >= c)
    {
        cout << "Largest number is: " << b;
    }
	if(c >= a && c >= b)
    {
        cout << "Largest number is: " << c;
    }
	return 0;
}
