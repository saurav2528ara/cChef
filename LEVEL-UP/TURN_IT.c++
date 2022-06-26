#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        int u,v,a,s;
        
        cin>>u>>v>>a>>s;
      if (u<=v)
      {
          cout<<"Yes"<<endl;
          continue;
      }
      double min = (u*u)-(2*a*s);
      if (min<=0)
      {
          cout<<"Yes"<<endl;
          continue;
      }
      min = sqrt(min);
      if (min<=v)
      cout<<"Yes"<<endl;
      else
      cout<<"No"<<endl;

    }
    
    return 0;
}
