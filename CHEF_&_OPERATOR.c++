#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter Loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int A,B;
        cout<<"Enter value of A & B : "<<endl;
        cin>>A>>B;
        if (A > B)
        cout<<'>'<<endl;
        else if (B > A)
        cout<<'<'<<endl;
        else
        cout<<'='<<endl;
    }
    return 0;
}