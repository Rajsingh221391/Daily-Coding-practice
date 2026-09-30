#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0)
    {
        cout<<"The year "<<year<<" is leap year.";
    }
    else
    {
        cout<<"The year "<<year<<" is not a leap year.";
    }
    return 0;
}