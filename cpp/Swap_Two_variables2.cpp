#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"Enter the first number:";
    cin>>A;
    cout<<"Enter the second number:";
    cin>>B;
    cout<<"Number before swapping"<<endl;
    cout<<"A is "<<A<<endl;
    cout<<"B is "<<B<<endl;
    /*A=A+B;
    B=A-B;
    A=A-B;*/
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;

    cout<<"Number after swapping"<<endl;
    cout<<"A is "<<A<<endl;
    cout<<"B is "<<B<<endl;
}