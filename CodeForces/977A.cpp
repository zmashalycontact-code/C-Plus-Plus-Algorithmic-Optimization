/**
 * author:  Zeidan
 * created: 06.09.2025 20:55:32
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll num, k;  cin >> num >> k;

    for(ll x{}; x<k; x++)
    {
        bool case1(num%10==0);
        if(case1)
            num/=10;
        else
            num--;

    } 

    println("{}", num);

    return 0;
}