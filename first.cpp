#include <iostream>
using namespace std;
int main()
{
    float basic,da,hra,gross;
    cout<<"Enter the basic of the employee:";
    cin>>basic;
    if(basic<25000)
    {
     da=basic*80/100;
     hra=basic*20/100;
     }
    else if(basic>=25000&&basic<40000)
    {
     da=basic*90/100;            
     hra=basic*25/100;
     }
    else if(basic>=40000)
    {
         da=basic*95/100;
         hra=basic*30/100;
         }
    gross=basic+da+hra;
    cout<<"\n\t Basic Pay:"<<basic;
    cout<<"\n\t Dearness Allowance:"<<da;
    cout<<"\n\t House Rent Allowance:"<<hra;
    cout<<"\n\t ---------------------";
    cout<<"\n\t Gross Pay:"<<gross;
    cout<<"\n\n ---------------------";
    return 0;
}
                       
                    
