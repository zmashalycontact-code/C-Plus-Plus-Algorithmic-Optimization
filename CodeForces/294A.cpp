/**
 * author:  Zeidan
 * created: 06.09.2025 23:15:50
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    ll arr[1000];

    for(ll x{}; x<n; x++)
        cin >> arr[x];

    ll t;   cin >> t;
    while(t--)
    {
        ll x, y;    cin >> x >> y;
        x--;

        bool case1(x>0); 
        bool case2(x<n-1);

        if(case1) // shemal
            arr[x-1]+=y-1; 
        if(case2)       // yemeen
            arr[x+1]+=arr[x]-y;

        arr[x]=0; // hroob
    }

    for(ll x{}; x<n; x++)
    {
        println("{}", arr[x]);
    }

    return 0;
}