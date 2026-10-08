/**
 * author:  Zeidan
 * created: 05.09.2025 21:32:58
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll num; cin >> num;
    ll cntr{};
    if(num>=100)
    {
        cntr+=num/100;
        num%=100;
    }
    if(num>=20)
    {
        cntr+=num/20;
        num%=20;
    }
    if(num>=10)
    {
        cntr+=num/10;
        num%=10;
    }
    if(num>=5)
    {
        cntr+=num/5;
        num%=5;
    }
    
    cntr+=num;

    print("{}", cntr);    

    return 0;
}