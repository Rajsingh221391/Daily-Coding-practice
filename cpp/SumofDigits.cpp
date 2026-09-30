#include <iostream>
using namespace std;
int main()
{
    int A;
    int sum=0;
    cout<<"Enter a number:";
    cin>>A;
    int i = A;
   /* while(i!=0)
    {
        int digit = i % 10;
        sum = sum +digit;
        i = i/10;
    }*/
    for(;A!=0;A=A/10)
    {
        int digit = A%10;
        sum = sum + digit;

    }
    cout<<"Sum of digits of "<<A<<" is "<<sum;
}