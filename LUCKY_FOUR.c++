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
         cin>>n;
         int r,cnt=0;
        while (n>0)
        {
            r = n%10;
            n = n/10;
            if (r == 4)
            {
                cnt += 1;
            }
        }
            cout<<cnt<<endl;
        
               
     }
    return 0;
}