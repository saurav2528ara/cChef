#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: "<<endl;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int N,rem,temp=0;
        cout<<"Enter number to reverse: "<<endl;
        cin>>N;
        while (N>0)
        {
            rem = N%10;
            N/=10;
            temp=temp*10+rem;
        }
        cout<<"reverse : "<<temp<<endl;

    }

    return 0;
}