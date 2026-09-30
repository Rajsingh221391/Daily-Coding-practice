#include <iostream>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5;
    cout<<"Enter marks in first subject:";
    cin>>m1;
    cout<<"Enter marks in second subject:";
    cin>>m2;
    cout<<"Enter marks in third subject:";
    cin>>m3;
    cout<<"Enter marks in fourth subject:";
    cin>>m4;
    cout<<"Enter marks in fifth subject:";
    cin>>m5;
    if (m1>=40&&m2>=40&&m3>=40&&m4>=40&&m5>=40)
    {
        cout<<"You passed the test";
    }

    else if(m1<40||m2<40||m3<40||m4<40||m5<40)
    {
        cout<<"You failed the test.";
    }
    
}