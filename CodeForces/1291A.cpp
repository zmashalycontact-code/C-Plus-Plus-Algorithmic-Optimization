/**
 * author:  Zeidan
 * created: 08.10.2025 09:33:16
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
const ll SIZE{10001};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
// ll arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    
    ll t;   cin >> t;
    
    while(t--) 
    {
        ll n;       cin >> n;
        string s;   cin >> s;
        
        string res{""};
        for(char c : s) 
        {
            if((c-'0')%2!=0)
                res+=c;
            if(res.size()==2)
                break;
        }
        
        if(res.size()<2)
            cout << -1 << "\n";
        else
            cout << res << "\n";
    }


}