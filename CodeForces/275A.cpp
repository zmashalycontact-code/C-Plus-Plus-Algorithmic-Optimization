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

    ll arr[1000][1000]{};
    ll res[3][3];

    for(ll x{1}; x<=3; x++)
        for(ll y{1}; y<=3; y++)
            cin >> arr[x][y];

    for(ll x{1}; x<=3; x++)
        for(ll y{1}; y<=3; y++)
        {
            ll sum=arr[x][y]+arr[x-1][y]+arr[x+1][y]+arr[x][y-1]+arr[x][y+1];
            bool case1(sum%2==0);
            if(case1)
                res[x-1][y-1]=1;
            else
                res[x-1][y-1]=0;
        }

    for(ll x{}; x<3; x++)
    {
        for(ll y{}; y<3; y++)
            print("{}", res[x][y]);
        println("");
    }


    return 0;
}