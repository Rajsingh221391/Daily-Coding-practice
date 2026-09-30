#include <iostream>
using namespace std;
int main()
{
   int A;
   int sum=0;
   cout<<"Enter your number:";
   cin>>A;
   for(int i = A;i!=0;i=i/10)
   {
        int digit = i % 10;
        sum = sum + (digit*digit*digit);
   }
   if(A==sum)
   {
        cout<<"The number "<<A<<" is an Armstrong";
   }
   else
   {
        cout<<"The number "<<A<<" is not an Armstrong number.";
   }
}