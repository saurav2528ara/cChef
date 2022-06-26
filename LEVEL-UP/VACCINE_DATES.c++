#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int d,l,r;
        cout<<"enter d l r: ";
        cin>>d>>l>>r;

        if ((d >= l) && (d <= r))
        cout<<"Take second dose now"<<endl;

        else if  ((d >= l) && (d > r))
        cout<<"Too Late"<<endl;

        else if ((d <l) && (d < r))
        cout<<"Too Early"<<endl; 

        else if ((d = l) && (d < r))
        cout<<"Take second dose now"<<endl;
    }
    return 0;
}
