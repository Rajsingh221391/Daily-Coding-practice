#include <iostream>
using namespace std;
int main()
{
    int A;
    int i;
    int j;
    cout<<"Enter the number of rows:";
    cin>>A;
    for(i=1;i<=A;i++)
    {
        for(j=1;j<=A-i;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}