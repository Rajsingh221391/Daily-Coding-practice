#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout<<"Enter the number:";
    cin>>num;

    if(!(cin>>num))
    {
        cout<<"Invalid input.";
        return 1;
    }

    else if(num%2!=0)
    {
        cout<<"The number is odd";
    }

    else
    {
        cout<<"The number is odd.";
    }

    return 0;
}