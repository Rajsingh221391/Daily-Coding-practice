#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"How may lines you want to print:";
    cin>>A;
    int i;
    int j;
    for(i=1;i<=A;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<""<<endl;
    }
    
}