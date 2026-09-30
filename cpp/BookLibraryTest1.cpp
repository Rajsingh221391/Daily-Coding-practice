#include <iostream>
#include <string>
using namespace std;

struct book
{
    int id;
    string title;
    float price;

};

int main()
{
    int n;
    cout<<"Enter the number of books:";
    cin>>n;
    book books[10];

    //reading inputs:
    for(int i = 0;i<n;i++)
    {
        cout<<"-------ENTER BOOK DETAILS FOR"<<i+1<<"\n";
        cout<<"ID:";
        cin>>books[i].id;
        cin.ignore();//clears newline buffer before reading string;
        cout<<"Title:";
        getline(cin,books[i].title);
        cout<<"Price:";
        cin>>books[i].price;
    }
    //Displaying the output:
    cout<<"------BOOK DETAILS--------\n";
    for(int i=0;i<n;i++)
    {
        cout<<"ID:"<<books[i].id<<"\nTitle:"<<books[i].title<<"\nPrice ₹"<<books[i].price<<endl;
        cout<<"--------------------------\n";
    }
    
    return 0;
}