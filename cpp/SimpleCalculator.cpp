#include <iostream>
using namespace std;

int main()
{
    int A,B;
    char c ;
    int result;
    cout<<"Enter your first number:";
    cin>>A;
    cout<<"Enter your second number:";
    cin>>B;
    cout<<"Enter the operator from[+,-,*,/]:";
    cin>>c;
    if(c == '+')
    {
        result = A + B;
    }
    if(c=='-')
    {
        result=A-B;
    }
    if(c=='*')
    {
        result=A*B;
    }
    if(c=='/')
    {
        result=A/B;
    }
    cout<<"Your answer is:"<<result;
}