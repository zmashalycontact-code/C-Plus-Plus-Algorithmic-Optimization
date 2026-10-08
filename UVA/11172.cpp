/**
 * author:  TryHardZ (Ziad Mashaly)
 * TryHardZ IS COOKING
 * implementation:
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const ll SIZE{200005};
ll arr1[SIZE];
ll arr2[SIZE];
ll arr3[SIZE];
ll prfx[SIZE];
ll frq[SIZE];


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t;   cin >> t;
    while(t--)
    {
        ll a, b;    cin >> a >> b;

        if(a>b)
            cout << ">\n";
        else if(a<b)
            cout << "<\n";
        else
            cout << "=\n";
    }
}