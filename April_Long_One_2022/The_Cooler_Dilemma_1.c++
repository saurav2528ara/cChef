#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int x,y,m;
        cout<<"Enter cost: ";
        cin>>x>>y>>m;

        x = x*m;
        if (x>=y)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
      
    }
    return 0;
}