#include <iostream>
using namespace std;
double sum(double n,double m)
{
    double a = n;
    double b = m;
    return a+b;
}

double subtract(double n, double m)
{
    double a = n;
    double b = m;
    return a-b;
}
double multiply(double n,double m)
{
    double a = n;
    double b = m;
    return a*b;
}
double divide(double n, double m)
{
    double a = n;
    double b = m;
    return a/b;
}
int main()
{
    double a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<subtract(a,b)<<endl;
    cout<<multiply(a,b)<<endl;
    cout<<divide(a,b)<<endl;
}