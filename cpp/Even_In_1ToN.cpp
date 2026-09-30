#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"Enter the number upto where you want to print the counting:";
    cin>>A;

    for(int i = 1;i<=A;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" is even"<<endl;
        }
        else
        {
            cout<<i<<" is odd"<<endl;
        }
    }
    return 0;
}