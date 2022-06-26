#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
       int a,b,c,d,k;
       cout<<"Enter values: ";
       cin>>a>>b>>c>>d>>k;

       int dis  = abs(a-c)+abs(b-d);
       if (k>=dis && k % 2 == dis % 2) 
       cout<<"Yes"<<endl;
       else
       cout<<"No"<<endl;

    }
    return 0;
}