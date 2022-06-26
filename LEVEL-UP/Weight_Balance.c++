#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
      int w1,w2,x1,x2,m;
      cout<<"Enter values: ";
      cin>>w1>>w2>>x1>>x2>>m;

    int mini = w1+x1 *m;
    int maxi = w1+x2 *m;

    if (mini <= w2 && maxi >= w2)
    cout<<"1"<<endl;
    else 
    cout<<"0"<<endl;
    }
    return 0;
}