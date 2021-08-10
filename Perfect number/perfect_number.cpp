#include<iostream>
using namespace std;
int main ()
{  
    int i,a,div,sum=0;
    cout<<"Enter the number: ";
    cin>>a;
    for (i=1;i<a;i++)
    {
        div=a%i;
        if(div==0)
        {
            sum = sum+i;
        }
    }
    if(sum==a)
    {
        cout<<""<<a<<" is a perfect number.";
    }
	else
    {
        cout<<""<<a<<" is not a perfect number.";
    }
	return 0;
}
