#include <iostream>
using namespace std;
int main()
{
    double A1,A2,A3;
    cout<<"Enter the first angle:";
    cin>>A1;
    cout<<"Enter the second angle:";
    cin>>A2;
    cout<<"Enter the third angle:";
    cin>>A3;
    double sum = A1+A2+A3;
    if(sum==180)
    {
        cout<<"Your triangle is valid.";
    }
    else
    {
        cout<<"Your triangle is invalid.";
    }
    return 0;

}