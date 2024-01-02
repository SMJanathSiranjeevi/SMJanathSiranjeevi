#include <iostream>
using namespace std;
int main()
{ 
    int n,num,digit,rev=0;
    cout<<"Enter the number:";
    cin>>num;
    n=num;
    while(num) 
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<"the reverse number is:"<<rev<<endl;
    if(n==rev)
    {
        cout<<"the given number is palindrome";
    }
    else
    {
         cout<<"the given number is not palindrome";
    }
    return 0;
}