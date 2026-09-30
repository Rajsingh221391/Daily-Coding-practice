#include <iostream>
using namespace std;
class student
{

    string name,college;
    int age;

    public:
        void read()
        {
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter college name:";
            cin>>college;
            cout<<"Enter your age:";
            cin>>age;
        }

        void display()
        {
            cout<<"your name is "<<name<<endl;
            cout<<"your college is "<<college<<endl;
            cout<<"your age is "<<age<<endl;
        }

};

int main()
{
    student S1;
    S1.read();
    S1.display();

    return 0;
}