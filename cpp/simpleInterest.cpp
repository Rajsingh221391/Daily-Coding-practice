#include <iostream>
using namespace std;
class Interest
{
    double p, r , t , interest_accumulated,total_amount;
    public:
        void set_data()
            {
                cout<<"Enter principle:";
                cin>>p;
                cout<<"Enter interest rate:";
                cin>>r;
                cout<<"Enter tenure for the loan:";
                cin>>t;
            }

        struct Result
        {
            double interest_accumulated;
            double total_amount;
        };
        Result calculate()
        {
            interest_accumulated = (p * r * t)/100;
            total_amount = interest_accumulated+p;

            return {interest_accumulated,total_amount};
        }

        void display()
        {
            cout<<"Your interest on amount "<<p<<" is "<<interest_accumulated<<endl;
            cout<<"Your total amount to be paid is "<<total_amount;
        }


        
};
int main()
{
    Interest i;
    i.set_data();
    i.calculate();
    i.display();

    return 0;
}