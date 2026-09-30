#include <iostream>
using namespace std;
int main()
{
    int A;
    cout<<"Enter the range of number:";
    cin>>A;
    int i;
    int PrimeTime=0;
    for(i=0;i<=A;i++)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                PrimeTime++;
            }
        }
        if(i==0||i==1)
        {
            cout<<i<<" Special case,neither prime nor composite.";
        }
        else if(PrimeTime>2)
        {
            cout<<i<<" is not prime";
        }
        else
        {
            cout<<i<<" is prime";
        }
        PrimeTime=0;
        cout<<" "<<endl;
    }
}