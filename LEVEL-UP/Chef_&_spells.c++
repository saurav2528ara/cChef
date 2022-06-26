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
        cout<<"enter value of abc: ";
        cin>>a>>b>>c;

        cout<<a+b+c - min (a,min(b,c))<<endl;
    }
    return 0;
}