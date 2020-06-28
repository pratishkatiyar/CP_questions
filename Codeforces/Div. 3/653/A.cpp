#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007


int32_t main()
{
    vfast
    ll t;
    cin>>t;
    f(u,0,t)
    {
        ll x,y,n,w,e;
        cin>>x>>y>>n;
        w=n%x;
        if(w<y){e=(n-x-(w-y));}
        else    {e=(n-(w-y));}
        debug(e)
    }    
    return 0;
}
