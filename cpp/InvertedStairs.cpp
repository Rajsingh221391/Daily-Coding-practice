#include <iostream>
using namespace std;
int main()
{
    int A;
    int i;
    int j;
    cout<<"Enter the number of rows:";
    cin>>A;
    for(i=A;i!=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<""<<endl;
    }
}