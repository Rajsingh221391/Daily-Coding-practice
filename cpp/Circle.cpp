#include <iostream>
using namespace std;
class circle
{
    double radius;
    public:
        void set_data()
        {
            cout<<"Enter radius:";
            cin>>radius;
        }
        double get_data()
        {
            return 3.14 * (radius*radius);
        }
        double circumference()
        {
            return 2*3.14*radius;
        }
};

int main()
{
    circle c;
    c.set_data();
    cout<<c.get_data()<<endl;
    cout<<c.circumference();
}