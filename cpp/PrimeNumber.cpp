#include <iostream>
using namespace std;
int main()
{

    int A;
    cout<<"Enter the number:";
    cin>>A;
    int i;
    int primeTime=0;
    for(i=1;i<=A;i++)
    {
        if(A%i==0)
        {
            primeTime++;
        }
    }
    if(A==0 || A==1)
    {
        cout<<"Special cases,cannot be consider either prime or composite number.";
    }
    else if(primeTime==2)
    {
        cout<<"The number is a prime number.";
    }
    
    else
    {
        cout<<"The number is not a prime number.";
    }
    
    
}