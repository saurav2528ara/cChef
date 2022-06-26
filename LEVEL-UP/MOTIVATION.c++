#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        long long int n,x;
        
        cout<<"Enter no of movie and space: ";
        cin>>n>>x;
        long long int temp=0;
        for (int i=0; i<n; i++)
        {
            long long int s,imd;
            
            cout<<"Enter space and rating: ";
            cin>>s>>imd;

            if ((s <= x) && (temp < imd))
            temp = imd;
        }
        cout<<"Output: "<<temp<<endl;
    }
    return 0;
}
