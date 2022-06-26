#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
       int n,a,b,c;
       cout<<"Enter values: ";
       cin>>n>>a>>b>>c;

       if ((a+c >= n) && (b>=n))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;

    }
    
    return 0;
}
