#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
       int l,r;
       cout<<"Enter value of L and R: ";
       cin>>l>>r;

       int ans = 2*r- 2*l+1;
       cout<<ans<<" "<<endl;
    }
    return 0;
}