#include <iostream>
using namespace std;
int square(int n)
{
    int squaring;
    squaring = n*n;
    return squaring;
}
int main()
{
    int a;
    cout<<"Enter the number to be squared:";
    cin>>a;
    cout<<square(a);
}