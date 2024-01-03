#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
    int n,dec,i,d,temp;
    long int bin;
    do
    {
    dec=d=bin=i=0;
    cout<<"\n\n\t\tMENU";
    cout<<"\n 1.Decimal to Binary";
    cout<<"\n 2.Binary to Decimal";
    cout<<"\n 3.Exit";
    cout<<"\n Enter your choice (1 or 2 or 3)";
    cin>>n;
    switch(n)
    { 
        case 1:
        cout<<"\nEnter a decimal number:";
        cin>>dec;
        temp=dec;
        while(dec!=0)
        {
            d=dec%2;
            bin += d * pow(2,i);
            dec /= 2;
            i++;
        }
        cout<<"\n"<<temp<<" in decimal ="<<bin<<" in binary ";
        break;
        case 2:
        cout<<"Enter a Binary Number:";cin>>bin;
        temp=bin;
        while(bin!=0)
        {
            d=bin%10;
            dec+=d*pow(2,i);
            bin+=10;
            i++;
        }
        cout<<temp<<"in binary="<<dec<<"in decimal";
        break;
        case 3: 
        default:
        cout<<"\t INVALID CHOICE"; 
        break;
    }
    }
    while(n!=3);
    return 0;
} 