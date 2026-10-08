/**
 * author:  Zeidan
 * created: 15.11.2025 23:43:24
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{600};
ll arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
ll arr4[300][300]{};
string ss[300]{};
char s[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};
ll pre[SIZE]{};

   

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    ll cntr1{}, cntr2{};
    for(ll x{}; x<n; x++)
    {
        cin >> arr1[x];
        if(arr1[x]%2==0)
        {
            cntr1++;
            if(arr1[x]%3==0 || arr1[x]%5==0)
                cntr2++;
        }
    }

    if(cntr1==cntr2)
        cout << "APPROVED";
    else
        cout << "DENIED";


}