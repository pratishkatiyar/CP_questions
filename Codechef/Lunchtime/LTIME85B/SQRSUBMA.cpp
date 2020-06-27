#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cout<<x<<"\n";
int main() {
    vfast
    int t;
    cin >> t;
    while(t--){
        ll n, x, ans = 0;
        cin >> n >> x;
        ll arr[n];
        for(ll i = 0; i < n; i++)cin >> arr[i];
        for(ll i = 1; i <= n; i++){
            if(x%i != 0)continue;
            ll fre[(x/i)] = {0LL};
            ll sum = 0;
            for(ll j = 0; j < i; j++)sum += arr[j];
            if(sum < x/i)fre[sum]++;
            for(ll j = i; j < n; j++){
                sum += arr[j];
                sum -= arr[j-i];
                if(sum < (x/i))fre[sum]++;
            }
            for(ll j = 1; j < x/i; j++){
                ans += fre[j]*fre[(x/i)-j];
            }
        }
        debug(ans)
    }
    return 0;
}
