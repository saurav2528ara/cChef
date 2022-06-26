#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int x,y;
        cout<<"Enter value of x and y: "<<endl;
        cin>>x>>y;

        x = x*3;
        y =  y*2;

        if (x>=y)
        cout<<y<<endl;
        else
        cout<<x<<endl;

    }
}