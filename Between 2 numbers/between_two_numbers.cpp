#include <iostream>
using namespace std;        

int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	if (a>10 & a<90)
	{
		cout<<"Number, "<<a<<" lies between 10 and 90.";
	}
	else
	{
		cout<<"Number, "<<a<<" do not lie between 10 and 90.";
	}
	return 0;
}
