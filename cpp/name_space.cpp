#include <iostream>
using namespace std;
namespace first{
    int x = 2;
}
namespace second{
    int x = 4;
}
int main(){
    int x = 0;
    cout<<"Your number is:"<<second::x;



    return 0;
}