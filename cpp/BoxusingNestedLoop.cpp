#include <iostream>
using namespace std;
int main()
{
    int A;
    int i=1;
    int j;
    cout<<"Enter the height of the box:";
    cin>>A;
    for(int i = 1;i<=A;i++)
    {
        if(i==1||i==A)
        {
            for(j=1;j<=A;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for(j=1;j<=A-2;j++)
            {
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}