/**
 * author:  Zeidan
 * created: 06.09.2025 22:40:48
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t;   cin >> t;
    while(t--)
    {
        ll arr[1000000];
        ll n;   cin >> n;
        
        for(ll x{}; x<n; x++)
        {
            cin >> arr[x];
        }

        ll cntr{}, min{arr[n-1]};
        if(n<2)
        {
            println("0");
            continue;
        }

        for(ll x{n-2}; x>=0; x--)
            if(arr[x] > min)
                cntr++;
            else
                min=arr[x];
        
        println("{}", cntr);
    }

    return 0;
}