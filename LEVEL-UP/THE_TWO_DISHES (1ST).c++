#include <iostream>
using namespace std;
#define MIN_VALUE -10000001;
int main()
{
    int t;
    cout<<"enter loop: ";
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        int max=MIN_VALUE;
        for (int i=0; i<=n; i++)
        {
            int t2=(s-i)>0?(s-i):-(s-i);

            if (t2 <= n)
            {
                int abs_diff = (i-t2) >0 ? (i-t2) : -(i-t2);
                if (max < abs_diff)
                    max=abs_diff;
            }
            
        }
        cout<<max<<endl;
    }
    return 0;
}