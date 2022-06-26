#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
      long long int n,k;
      cout<<"Enter values: ";
      cin>>n>>k;

    //   int temp = n-k;
    //  if (temp > 0)
    //  cout<<temp-k<<endl;
    //  else if (temp == 0)
    //  cout<<"0"<<endl;
    //  else if (temp < 0)
    //  cout<<n<<endl;
    // another approach
    // int temp;
    // temp = n % k;
    // cout<<temp<<endl;
//another approach
  if (k==0)
  cout<<n<<endl;
  else
  cout<<n%k<<endl;    

      

    }
    return 0;
}