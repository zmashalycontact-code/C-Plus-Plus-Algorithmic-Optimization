/**
 * author:  Zeidan
 * created: 07.09.2025 00:09:36
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n, cntr{1};  

    while(cin >> n)
    {
        if(n==0)
            return 0;

        ll arr[1000];
        ll sum{};

        for(ll x{}; x<n; x++)
        {
            cin >> arr[x];
            sum+=arr[x];
        }

        ll avg{sum/n}, op{};

        for(ll x{}; x<n; x++)
        {
            bool chk(arr[x]>avg);
            if(chk)
                op+=arr[x]-avg;
        }
        cout << "Set #" << cntr << '\n';
        cout << "The minimum number of moves is " << op << ".\n\n";
        cntr++;
    }


    return 0;
}