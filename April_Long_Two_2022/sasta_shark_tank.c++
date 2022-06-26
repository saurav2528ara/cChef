#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int a,b;
        cout<<"Enter amount: ";
        cin>>a>>b;

        a = a*2;

        if (a==b)
        {
            cout<<"ANY"<<endl;
        }
        else if (a > b)
        {
            cout<<"FIRST"<<endl;
        }
        else if (a < b)
        {
            cout<<"SECOND"<<endl;
        }

    }
}