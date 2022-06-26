#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
         int N;
         cout<<"Enter days: ";
         cin>>N;
         cout<<(N/7 + (N%7) / 6)<<endl;
    }
    return 0;
}
