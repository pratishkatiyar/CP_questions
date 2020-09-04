#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007


const ll N=200005;

ll t,s;
ll  n;

ll ds(ll u) {
    ll ans=0;
    while(u>0){
        ans+=u%10;
        u/=10;
    }
    return ans;
}

int32_t main()
{
	vfast;
    cin>>t;
    while(t--) 
    {
        cin>>n>>s;
        ll ans=0;
        for (ll cur = 1;ds(n)>s;cur*=10,n/=10) 
        {
            ll l=n%10;
            if(l>0) 
            {
                ans+=(10-l)*cur;
                n+=10-l ;
            }
        }
        debug(ans)
    }
    return 0;
}
