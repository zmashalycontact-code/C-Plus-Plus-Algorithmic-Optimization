/**
 * author:  Zeidan
 * created: 06.09.2025 22:08:22
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    ll row{}, col{}, num{};
    for(ll x{1}; x<=5; x++)
        for(ll y{1}; y<=5; y++)
        {
            cin >> num;
            bool case1(num==1);
            if(case1)
            {
                row=x;
                col=y;
            }

        }

    bool case11(row>3);
    bool case22(col>3);

    ll rop{}, cop{};

    if(case11)
        rop=row-3;
    else
        rop=3-row;

    
    if(case22)
        cop=col-3;
    else
        cop=3-col;


    print("{}", rop+cop);

    return 0;
}