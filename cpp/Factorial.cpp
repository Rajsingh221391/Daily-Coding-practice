#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact=1;
    cout<<"Enter the number that you want factorial of.";
    cin>>n;
    for(int i = n;i>=1;i--)
    {
        fact = fact * i;
    }
    cout<<fact;
}