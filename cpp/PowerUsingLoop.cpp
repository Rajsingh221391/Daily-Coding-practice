#include <iostream>
using namespace std;
int main()
{
    int A;
    int i;
    double prod=1;
    cout<<"Enter the base number:";
    cin>>A;
    cout<<"Enter the power number:";
    cin>>i;
    for(int j = i;j>=1;j--)
    {
        prod=prod*A;
    }

    cout<<"The product of base "<<A<<" to the power of "<<i<<" is = "<<prod<<endl;
}
