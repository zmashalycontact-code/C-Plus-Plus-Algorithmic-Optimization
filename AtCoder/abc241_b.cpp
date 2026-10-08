/**
 * author:  Zeidan
 * created: 12.11.2025 00:18:34
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{3000};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
ll arr4[300][300]{};
string ss[300][300]{};
char s[SIZE]{};
// ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};
ll pre[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, m;    cin >> n >> m; // 3 2


    for(ll x{}; x<n; x++)
        cin >> arr1[x]; // 1 1 3

    for(ll x{}; x<m; x++)
        cin >> arr2[x]; // 3 1

    
    ll cntr{}; // 0
    for(ll x{}; x<m; x++) // arr2 // 3 1 
        for(ll y{}; y<n; y++) // arr1 // 1 1 3
            if(arr1[y]==arr2[x])
            {
                cntr++;
                arr1[y]=-1;
                break;
            }

    if(cntr==m)
        cout << "Yes";
    else
        cout << "No";

        // cout << cntr;


}