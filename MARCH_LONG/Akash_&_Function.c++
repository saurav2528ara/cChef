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
         cout<<"Enter value: ";
         cin>>N;
         N++;

         N /= 2;
         cout<<N<<endl;
    }
    return 0;
}
