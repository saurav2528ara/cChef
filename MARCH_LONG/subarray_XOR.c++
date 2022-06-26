#include <bits/stdc++.h> 
#define ll long long int 
#define ull unsigned long long int 
using namespace std; 
 
ll mod = 998244353; 

int main()
{
    int t;
    cout<<"Enter loop: ";
    cin>>t;
    for (int i=0; i<t; i++)
    {
        
        ll n; 
    cin >> n; 
    string s; 
    cin >> s; 
 
    ll a[n] = {0}; 
 
    if (s[0] == '1') 
    { 
        a[0] = 1; 
    } 
 
    ll arr = a[0]; 
 
    for (ll i = 1; i < n; i++) 
    { 
        if (s[i] == '1') 
        { 
            arr += (i + 1); 
        } 
        a[i] = arr; 
        a[i] = a[i] % 2; 
    } 
 
    ll c = 1; 
    ll sol = 0; 
    for (ll i = n - 1; i >= 0; i--) 
    { 
        if (a[i] == 1) 
        { 
            sol += c; 
            sol = sol % mod; 
        } 
        c = c * 2; 
        c = c % mod; 
    } 
    cout << sol % mod << "\n"; 
    }
    
    return 0;
}
