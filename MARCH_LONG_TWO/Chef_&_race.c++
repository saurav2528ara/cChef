#include <iostream>
using namespace std;
int main()
{
   int t;
   cout<<"Enter loop: ";
   cin>>t;
   for (int i=0; i<t; i++)
   {
       int x,y,a,b;
       cout<<"Enter value: ";
       cin>>x>>y>>a>>b;

    // if ((x!=a) && (y!=b) && (a!=x) && (b!=y))
    // cout<<"2"<<endl;
    // else if ((y==b) && (x!=a))
    //  cout<<"1"<<endl;
    //  else if ((x == b && y == a) || (a==y && b==x))
    //  cout<<"0"<<endl;
     
       
        // else if ((x==a2) & (y==b2) || (x==b2) & (y==a2))
        // cout<<"2"<<endl;
        // else
        // cout<<"0"<<endl;

        int score1 = 0, score2=0;
        if (x!=a && x!=b)
            score1=1;
        if (y!=a && y!=b)
            score2=1;
        cout<<score1+score2<<endl;

   }

    return 0;
}