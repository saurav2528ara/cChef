#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        
       char s[6], o[6], m[6];
       cout<<"Enter character: ";
       cin>>s>>o;

        int n;
       for (int i=0; i<6; i++)
       {
            if (s[i] == o[i])
            m[i] = 'G';
       else 
            m[i] = 'B';
       }
       m[5] = '\0';
       
        cout<<m<<endl;
    }
    
    return 0;
}
