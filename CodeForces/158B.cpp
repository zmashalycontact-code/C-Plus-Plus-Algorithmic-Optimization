/**
 * author:  Zeidan
 * created: 06.09.2025 21:37:48
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    ll arr[5]{};
// a7san frequicy array le a7san coach
    for(ll x{}; x<n; x++)
    {
        ll p;   cin >> p;
        arr[p]++;
    }

    ll cars{};
    cars+=arr[4];

    ll threes{arr[3]};
    cars+=threes;
    arr[1]-=threes;

    bool case1(arr[1]<0);

    if(case1)
        arr[1]=0;

    cars+=arr[2]/2;
    arr[2]%=2;

    ll people{arr[1]+arr[2]*2};

    bool case11(people>0);

    if(case11)
        cars+=((people+3)/4);

    println("{}", cars);



    return 0;
}