/**
 * author:  Zeidan
 * created: 06.09.2025 23:42:12
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
    {
        cin >> arr[x];
    }
    
    ll mxval{arr[0]}, mxidx{};
    ll mnval{arr[0]}, mnidx{};
    
    for(ll x{1}; x<n; x++)
    {
        if(arr[x]>mxval)
        {
            mxval=arr[x];
            mxidx=x;
        }
        if(arr[x]<=mnval)
        {
            mnval=arr[x];
            mnidx=x;
        }
    }

    ll op{mxidx+(n-1-mnidx)};
    
    if(mxidx>mnidx)
    {
        op--;
    }
    
    println("{}", op);


    return 0;
}