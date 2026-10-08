/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{300000};
char arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
// string arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, x;   cin >> n >> x;
    
    ll nn{7-x};
    bool chk(true);
    for(ll i{}; i<n; ++i)
    {
        ll a, b;    cin >> a >> b;
        if(a==nn || b==nn || (7-a)==nn || (7-b)==nn)
        {
            chk=false;
            break;
        }
    }
    
    if(chk)
        cout << "YES";
    else
        cout << "NO";
}