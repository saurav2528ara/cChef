#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int n;
        cout<<"Enter number: ";
        cin>>n;

       int sum= (n*(n+1))/2;
        if (sum % 2)
        cout<<n-1<<" "<<endl;
        else
        cout<<n<<" "<<endl;
    }
    return 0;
}