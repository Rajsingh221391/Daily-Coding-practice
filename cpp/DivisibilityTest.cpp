#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    if(n%3==0&&n%5==0)
    {
        cout<<n<<" is divisible by both 3 and 5";
    }
    else
    {
        cout<<n<<" is not divisible by both 3 and 5";
    }
}