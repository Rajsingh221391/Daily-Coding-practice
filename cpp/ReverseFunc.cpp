#include <iostream>
using namespace std;
int reverse(int n)
{
    int b = n;
    int reverse=0;
    while(n!=0)
    {
        int digit = n%10;
        reverse = reverse*10+digit;
        n=n/10;
    }
    return reverse;
}

int main()
{
    int a;
    cout<<"Enter your number:";
    cin>>a;
    cout<<"The reverse of the numeber " <<a<< " is "<<reverse(a)<<endl;
}