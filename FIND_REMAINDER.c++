#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cout<<"Enter loop time: ";
 cin>>t;
 for (int i=0; i<t; i++)  
 {
     int a,b;
     cin>>a>>b;
     cout<<"Enter value of "<< a <<" and "<< b<<endl;
     
     int temp = a%b;
     cout<<temp<<endl;
 }

return 0;
}