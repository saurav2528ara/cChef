#include <bits/stdc++.h>
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
         cout<<endl;
         cin>>n;
        int ans;
         int ld=n%10; //for last digit
         while (n>0)
         {
             int r = n % 10;
             n = n/10;
            ans = ld + r;
         }
         cout<<ans<<endl;
               
     }
    return 0;
}