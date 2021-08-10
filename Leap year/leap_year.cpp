#include <iostream>
using namespace std;

int main() {
    int year;

    cout<<"Enter your year: ";
    cin>>year;

    if(year%4==0) 
	{
        if(year%100==0) 
		{
            if(year%400==0)
            {
                cout<<"The given year, "<<year<< " is a leap year.";
            }
			else
			{
                cout<<"The given year, "<<year<<" is not a leap year.";
            }
        }
        else
        {
            cout<<"The given year, "<<year<<" is a leap year.";
        }
    }
    else
    {
        cout<<"The given year, "<<year<<" is not a leap year.";
    }
    return 0;
}
