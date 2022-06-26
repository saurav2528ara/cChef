#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
       int a,b,c;
       cout<<"Enter three element: ";
       cin>>a>>b>>c;

        if (a >= b && a >= c)
        cout<<a<<endl;
        else if(b >= a && b >= c)
        cout<<b<<endl;
        else 
        cout<<c<<endl;
    }
    
    return 0;
}
