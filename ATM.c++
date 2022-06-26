#include <iostream>
using namespace std;
int main()
{
     int withdraw; //transaction
        cout<<"Enter amount to  withdraw: ";
        cin>>withdraw;
        float total;
        cout<<"Total amount in account: ";
        cin>>total;

    if ((withdraw % 5 ==0) && (total > (withdraw + 0.50)))
        cout<<(total - withdraw - 0.50);
        else
        cout<<total;

    return 0;
}