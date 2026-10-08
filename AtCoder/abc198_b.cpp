/**
 * author:  Zeidan
 * created: 24.10.2025 21:55:41
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const ll SIZE{300000};
char arr1[SIZE]{};
ll arr2[SIZE]{};
ll arr3[SIZE]{};
// string arr[SIZE][SIZE]{};
ll frq[SIZE]{};
ll chng[SIZE]{};
ll idx[SIZE]{};


int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> arr1;

    ll len=strlen(arr1);
    ll r{len-1};

    while(r>=0 && arr1[r]=='0')
        r--;

    ll l{};
    bool chk(true);
    
    while(l<r)
    {
        if(arr1[l]!=arr1[r])
        {
            chk=false;
            break;
        }
        l++, r--;
    }

    if(chk)
        cout << "Yes";
    else
        cout << "No";

}