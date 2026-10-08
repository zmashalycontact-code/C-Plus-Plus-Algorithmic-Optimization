/**
 * author:  Zeidan
 * created: 19.09.2025 15:24:40
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
    
int main()
{

    ll arr[1000];
    ll n;   cin >> n;

    for(ll x{}; x<n; x++)
        cin >> arr[x];


    ll best{arr[0]};
    ll worst{arr[0]};
    ll cntr{};

    for(ll x{1}; x<n; x++)
    {
        if(arr[x]>best)
        {
            best=arr[x];
            cntr++;
        }
        if(arr[x]<worst)
        {
            worst=arr[x];
            cntr++;
        }

            
    }

    cout << cntr;
        



}