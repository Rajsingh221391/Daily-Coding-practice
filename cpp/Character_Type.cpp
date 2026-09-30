/* Accept a character and determine whether it is:
Uppercase
Lowercase
Digit
Special character*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character:";
    cin>>ch;

    if(isupper(ch))
    {
        cout<<"Your character is in in uppercase.";
    }

    else if (islower(ch))
    {
        cout<<"Your character is in lower case.";
    }

    else if (isdigit(ch))
    {
        cout<<"Your character contains digits.";
    }
    else
    {
        cout<<"Your character contains special characters.";
    }
    return 0;
}