/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{100001};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
// string arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t;   cin >> t;
    while(t--)
    {
        string s;   cin >> s;

        for(ll x{}; x<s.size(); x++)
            s[x]=tolower(s[x]);
        if(s=="yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
