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

// ll sum(ll n)
// {
//     ll s1{n%mod};
//     ll s2{(n+1)%mod};
//     ll res{(s1*s2)%mod};

//     if(res%2!=0)
//         res+=mod;
//     res/=2;

//     return res;
// }

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    ll t;   cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        ll cntr{};
        while(n>1)
        {
            if(n%6==0)
                n/=6;
            else if(n%3==0)
                n*=2;
            else
            {
                cntr=-1;
                break;
            }
            cntr++;

        }
        cout << cntr << '\n';
    }
}