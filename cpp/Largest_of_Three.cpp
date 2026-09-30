#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"Enter the third number:";
    cin>>n3;

    if(n1>n2&&n1>n3)
    {
        cout<<n1<<" is the largest.";
    }
    else if (n2>n1&&n2>n3)
    {
        cout<<n2<<" is the is the largest.";
    }

    else if(n3>n1&&n3>n2)
    {
        cout<<n3<<" is the largest.";
    }
    return 0;

}
    
