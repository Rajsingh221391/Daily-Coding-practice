#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"Enter the number of rows:";
    cin>>A;
    for(int i = 1; i<=A;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=i-1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}