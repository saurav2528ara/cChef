//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    float ac_bal;
    cin>>x>>ac_bal;
    if(x%5==0)
    {
        if(ac_bal>=x+0.50)
        {
            cout<<fixed<<setprecision(2)<<ac_bal-x-0.50;
        }else
        cout<<fixed<<setprecision(2)<<ac_bal<<endl;
    }else
    cout<<fixed<<setprecision(2)<<ac_bal<<endl;
	return 0;
}