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
       cout<<"Enter three number: ";
       cin>>a>>b>>c;    

       if ((a==7) || (b==7) || (c==7))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;

    }
    return 0;
}