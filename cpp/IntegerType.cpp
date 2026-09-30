#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    

    if(!(cin>>n))
    {
        cout<<"The input is invalid!"<<endl;
    }

    else if(n>0)
    {
        cout<<"The number is positive."<<endl;
    }
    else if(n==0)
    {
        cout<<"The numer is 0"<<endl;
    }
    else
        {
            cout<<"The number is negative.";
        }
    
}