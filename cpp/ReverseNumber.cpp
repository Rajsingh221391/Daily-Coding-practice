#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"Enter your number:";
    cin>>A;
    int original=A;
    int reverse=0;
    for(;A>0;A=A/10)
    {
        int digit=A%10;
        reverse = reverse*10+digit;
    }
    cout<<"The reverse order of number "<<original<<" is "<<reverse<<endl;
    if(reverse==original)
    {
        cout<<"Your number is a palindrome.";
    }
    else
    {
        cout<<"Your number is not a palindrome.";
    }
}