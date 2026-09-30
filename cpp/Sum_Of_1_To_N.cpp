#include <iostream>
using namespace std;
int main()
{
    int A,sum;
    cout<<"Enter the number upto where you want to print the counting:";
    cin>>A;
    sum=0;
    for(int i=1;i<=A;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of numbers from 1 to "<<A<<" is:"<<sum;
}