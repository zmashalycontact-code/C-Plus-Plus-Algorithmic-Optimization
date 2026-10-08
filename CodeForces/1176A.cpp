/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{300000};
ll arr1[3]{};
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
        ll n;   cin >> n;

        ll cntr{};
        while(n%5==0)
        {
            n=4*n/5;
            cntr++;
        }
        while(n%3==0)
        {
            n=2*n/3;
            cntr++;
        }
        while(n%2==0)
        {
            n/=2;
            cntr++;
        }


        if(n==1)
            cout << cntr << '\n';
        else
            cout << -1 << '\n';
    }


}