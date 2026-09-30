#include <iostream>
#include <cmath>
using namespace std;
class Calculator
{
    double num1, num2,sum,product,difference,quotient,remainder;
    public:
        void read()
        {
            cout<<"Enter number1:";
            cin>>num1;
            cout<<"Enter number2:";
            cin>>num2;
        }

        void calculate()
        {
            sum = num1 + num2;
            product = num1 * num2;
            difference = num1 - num2;
            quotient = num1/num2;
            remainder = fmod(num1 , num2);
        }

        void display()
        {
            cout<<sum<<endl;
            cout<<product<<endl;
            cout<<difference<<endl;
            cout<<quotient<<endl;
            cout<<remainder<<endl;
        }
};

int main()
{
    Calculator c1;
    c1.read();
    c1.calculate();
    c1.display();

    return 0;
}