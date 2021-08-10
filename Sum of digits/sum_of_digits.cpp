#include <iostream>  
using namespace std;  

int main()  
{  
    int a,b,sum=0;    
    cout<<"Enter the number whose sum of digits is to be calculated: ";    
    cin>>a;    
    while(a>0)    
	{    
	    b=a%10;    
		sum=sum+b;    
	    a=a/10;    
	}    
    cout<<"Sum of digit is= "<<sum;    
    return 0;  
}  
