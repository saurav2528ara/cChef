#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        string s;
        cout<<"Enter string: ";
        cin>>s;
       int n = s.size();
       int count=0; int ans=0;
       for (int i=0; i<n; i++)
       {
           if ((s[0] != s[i]) && (s[i] != s[n-1]))
           count++;
           else
           count=0;
           ans = max(ans,count);
       }
            if (ans == 0)
            cout<<"-1"<<endl;
            else
            cout<<ans<<endl;
    }
    return 0;
}
