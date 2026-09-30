#include <iostream>
using namespace std;

int main()
{
    int A;
    cout<<"Enter the number that you want to take as a range:";
    cin>>A;
    int sum=0;
    for(int i=1;i<=A;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"The sum of numbers from 1 to "<<A<<" is "<<sum;

}
