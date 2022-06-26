#include <iostream>
using namespace std;
int main ()
{
    int t;
    cout<<"enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
       int a,b,x;
       cout<<"Enter value of a,b,x: ";
       cin>>a>>b>>x;
       int temp=(b-a)/x;
       cout<<temp<<endl;
       
    }
    

return 0;
}