#include <iostream>
using namespace std;
int CountDigit(int n)
{
    int count=0;
    int a = n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }

    return count;
}
int main()
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"You number has "<<CountDigit(a)<<" digits.";
}