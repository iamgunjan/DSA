#include <iostream>
using namespace std;

int main() 
{
  int a,b,hcf;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  if (b>a) 
  {   
    int temp=b;
    b=a;
    a=temp;
  } 
  for (int i=1; i<=b; ++i) 
  {
    if (a%i==0 && b%i==0) 
	{
      hcf=i;
    }
  }
  cout<<"HCF = "<<hcf;
  return 0;
}
