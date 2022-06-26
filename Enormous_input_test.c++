#include <bits/stdc++.h>
using namespace std;
int main()
{
    //for fast taking input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int cnt=0;
    for (int i=0; i<=n; i++)
    {
        int ti;
        cin>>ti;

        if (ti%k==0)
        {
            cnt+=1;
        }
    }
cout<<cnt<<endl;
return 0;
}