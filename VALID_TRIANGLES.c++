#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cout<<"Enter loop: ";
     cin>>t;
     for (int i=0; i<t; i++)
     {
         int a,b,c;
         cout<<"Enter number to check triangle is valid or not: ";
         cin>>a>>b>>c;
         int total = a+b+c;
         if (total == 180)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }
               
    return 0;
}