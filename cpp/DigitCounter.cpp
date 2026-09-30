#include <iostream>
using namespace std;
int main()
{
    int A;
    int B;
    int i=0;
    cout<<"Enter your number:";
    cin>>A;
    B = A;
    while(A!=0)
    {
        A=A/10;
        i++;
    }
    cout<<"The number of digits in number "<<B<<" is "<<i;


}