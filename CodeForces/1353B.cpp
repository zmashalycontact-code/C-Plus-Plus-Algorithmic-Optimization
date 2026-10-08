/**
 * author:  Zeidan
 * created: 07.09.2025 00:50:16
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll t{}; cin >> t;
    while(t--)
    {
        ll n, k;    cin >> n >> k;
        ll arr1[1000], arr2[1000];

        for(ll x{}; x<n; x++)
            cin >> arr1[x];
        for(ll x{}; x<n; x++)
            cin >> arr2[x];

        for(ll x{}; x<n-1; x++)
            for(ll y{}; y<n-x-1; y++)
                {
                    if(arr1[y]>arr1[y+1])
                    {
                        ll temp{arr1[y]};
                        arr1[y]=arr1[y+1];
                        arr1[y+1]=temp;
                    }
                }
        
        for(ll x{}; x<n-1; x++)
            for(ll y{}; y<n-x-1; y++)
                {
                    if(arr2[y]<arr2[y+1])
                    {
                        ll temp{arr2[y]};
                        arr2[y]=arr2[y+1];
                        arr2[y+1]=temp;
                    }
                }
        for(ll x{}; x<k; x++)
            if(arr2[x]>arr1[x])
                arr1[x]=arr2[x];
            else
                break;

        ll sum{};
        for(ll x{}; x<n; x++)
            sum+=arr1[x];

        println("{}", sum);

    }


    return 0;
}