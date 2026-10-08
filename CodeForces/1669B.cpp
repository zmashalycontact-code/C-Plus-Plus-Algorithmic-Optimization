/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{300000};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
// string arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};
ll pre[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    ll t;   cin >> t;
    while(t--)
    {
        bool chk(false);
        ll n;   cin >> n;

        for(ll x{}; x<n; x++)
        {
            cin >> arr1[x];
            frq[arr1[x]]++;
        }

        ll prnt{};
        for(ll x{}; x<n; x++)
            if(frq[arr1[x]]>=3)
            {
                chk=true;
                prnt=arr1[x];
                break;
            }

        if(chk)
            cout << prnt << '\n';
        else
            cout << -1 << '\n';

        for(ll x{}; x<n; x++)
            frq[arr1[x]]=0;



    }


}