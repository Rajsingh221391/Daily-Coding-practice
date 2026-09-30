#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"Enter the number that you want to print backwards:";
    cin>>A;

    for(int i = A;i>=1;i--)
    {
        cout<<i<<endl;
    }
}