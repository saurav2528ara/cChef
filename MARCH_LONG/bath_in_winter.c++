#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
       int x,y,temp;
       // x for geyser and y for bucket capacity
       cout<<"Enter geyser and bucket capacity: ";
       cin>>x>>y;

        int ans = y+y;
        temp = x / ans;

        cout<<temp<<endl;

    }
    
    return 0;
}
