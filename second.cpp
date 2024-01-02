#include <iostream>
using namespace std;
int main()
{
    float percentage;
    int x;
    cout<<"Enter your percentage:";
    cin>>percentage;
    cout<< "you scored "<<percentage<<"%"<<endl;
    x=percentage/10;
    switch(x)
    { 
        case 10:
        case 9:
        case 8:
        cout<<"You have passed in destinction";
        break;
        case 7:
        case 6:
        cout<<"you have passed with first division";
        break;
        case 5:
        cout<<"you have passed with second division";
        break;
        case 4:
        cout<<"you have passed with third division";
        break;
        default:
        cout<<"sorry you have failed";
    }

    return 0;
}