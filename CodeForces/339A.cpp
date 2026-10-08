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

    string s;   cin >> s;
    ll ss=s.size();
    ll cntr{};
    for(ll x{}; x<ss; x++)
    {
        if(isdigit(s[x]))
        {
            arr1[cntr]=s[x]-'0';
            cntr++;
        }
    }

    sort(arr1, arr1+cntr);

    for(ll x{}; x<cntr; x++)
    {
        cout << arr1[x];
        if(x!=cntr-1)
            cout << '+';
        else
            cout << "";
    }
}
