#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<'\n';
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007

int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){  
        vector<ll>v;
        ll n,x;
        cin>>n;
        f(i,0,n)    {
            cin>>x;
            v.pb(x);
        }
        std::sort(v.begin(), v.end()); 
        vector<ll>::iterator ip; 
        ip = std::unique(v.begin(), v.end()); 
        v.resize(std::distance(v.begin(), ip)); 

        ll mn,mx;
        mn=*min_element(v.begin(), v.end());
        mx=*max_element(v.begin(), v.end());
        if(mx-mn+1==v.size())   debug("YES")
        else    debug("NO")

    }
    
    return 0;
}
 
