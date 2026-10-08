/**
 * author:  Zeidan
 * created: 06.09.2025 20:50:27
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll n;   cin >> n;
    
    for(ll x{1}; x<=n; x++)
    {
        bool lucky(true);
        ll num{x};
        
        while(num>0)
        {
            ll digit=num%10;
            bool case1(digit!=4 && digit!=7);

            if(case1)
            {
                lucky=false;
                break;
            }
            num/=10;
        }
        
        bool case11(n%x==0);
        
        if(lucky)
            if(case11)
            {
                println("YES");
                return 0;
            }
    }
    
    println("NO");


    return 0;
}