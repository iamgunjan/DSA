#include<iostream>
using namespace std;

int main()
{
    int m,n,lcm,hcf,a,b,temp;
    cout<<"Enter Two Numbers: ";
    cin>>n>>m;
    a=n;
    b=m;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(n*m)/hcf;
    cout<<"\nLCM = "<<lcm;
    cout<<"\nHCF = "<<hcf;
    cout<<endl;
    return 0;
}
