#include <iostream>
using namespace std;

int main()
{
    int score=50;

    int *ptr=&score;

    cout<<"Value inside score: "<<score<<endl; // Output:50
    cout<<"Address of score in RAM"<<&score<<endl; // Output fromat:0x7ffe 
    cout<<"Value stored in ptr: "<<ptr<<endl; // Output: same address as that of &score as it is pointing to the address of the score.
    cout<<"Address of the ptr itself: "<<&ptr<<endl; // Output: Address of ptr in RAM.

    //Dereferencing: GO to the address inside ptr and read content
    cout<<"Value pointed to by ptr(*ptr): "<<*ptr<<endl; // Output:50

    return 0;
}