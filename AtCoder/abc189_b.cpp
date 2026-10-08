/**
 * author:  Zeidan
 * created: 12.11.2025 00:18:34
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{600000};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
ll arr4[300][300]{};
string ss[300][300]{};
char s[SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};
ll pre[SIZE]{};

   

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, s;    cin >> n >> s;
    ll sum{};
    for(ll x{}; x<n; x++)
    {
        ll n1, n2;  cin >> n1 >> n2;

        sum+=n1*n2;

        if(sum>s*100)
        {
            cout << x+1;
            return 0;
        }

    }

    cout << -1;


}