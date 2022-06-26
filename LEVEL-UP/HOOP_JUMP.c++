#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    int temp;
    for (int i=0; i<t; i++)
    {
        int n;
       cout<<"Enter hoop: ";
        cin>>n;
        for (int i=0; i<n; i++)
        temp = (n/2)+1;
        cout<<"Middle Hoop: "<<temp<<endl;
    }
    
    return 0;
}
