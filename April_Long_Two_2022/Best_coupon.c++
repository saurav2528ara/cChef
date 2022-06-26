#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int x;
        cout<<"Enter amount: ";
        cin>>x;

        if (x<1000)
        cout<<100<<endl;
        else
        cout<<(x=((x*10)/100))<<endl;


    }
}