#include <iostream>
using namespace std;
void isPrime(int n )
{
    int primeTime=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            primeTime++;
        }
    }
    if(n==0||n==1)
    {
        cout<<"Special case.";
    }
    else if(primeTime>2)
    {
        cout<<"The number is composite";
    }
    else if(primeTime==2)
    {
        cout<<"The number is a prime";
    }
    

}
int main()
{
    int A;
    cout<<"Enter the number:";
    cin>>A;
    isPrime(A);

    return 0;
}