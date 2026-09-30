#include <iostream>
using namespace std;
int main()
{
    int A,B,temp;
    cout<<"Enter your first number:";
    cin>>A;
    cout<<"Enter your second numeber:";
    cin>>B;
    cout<<"number before swapping"<<endl;
    cout<<"A is "<<A<<endl;
    cout<<"B is "<<B<<endl;
    temp=A;
    A=B;
    B=temp;
    cout<<"Number after swapping"<<endl;
    cout<<"A is "<<A<<endl;
    cout<<"B is "<<B<<endl;
    return 0;
}