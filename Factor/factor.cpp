#include <iostream>
using namespace std;

int main() {
    int a, i;
    cout<<"Enter a number: ";
    cin>>a;
    cout << "Factors of "<<a<<" are: ";  
    for(i=1; i<=a; ++i) 
	{
        if(a%i==0)
            cout<<i<<" ";
    }
    return 0;
}
