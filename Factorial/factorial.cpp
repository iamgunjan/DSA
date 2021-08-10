#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,a;    
  cout<<"Enter any Number: ";    
 cin>>a;    
  for(i=1;i<=a;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<a<<" is: "<<fact<<endl;  
  return 0;  
}  
