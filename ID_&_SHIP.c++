#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cout<<"Enter loop: ";
     cin>>t;
     for (int i=0; i<t; i++)
     {
         char c;
         cout<<"Enter character: ";
         cin>>c;
        if (c=='B' || c=='b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if (c=='C' || c=='c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if (c=='D' || c=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if (c=='F' || c=='f')
        {
            cout<<"Frigate"<<endl;
        }
     }
    return 0;

}
     