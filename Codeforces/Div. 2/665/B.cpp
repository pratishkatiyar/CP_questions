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


int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
    	ll x1,y1,z1;
    	ll x2,y2,z2;
    	cin>>x1>>y1>>z1;
    	cin>>x2>>y2>>z2;
    	ll w=0;ll ans=0;
    	w=min(z1,y2);
    	ans+=(2*w);
    	z1-=w;
    	y2-=w;

    	w=min(z1,z2);
    	z1-=w;
    	z2-=w;

    	w=min(x1,z2);
    	x1-=w;
    	z2-=w;

    	w=min(y1,y2);
    	y1-=w;
    	y2-=w;

    	w=min(y1,z2);
    	y1-=w;
    	z2-=w;

    	ans-=(2*w);

    	debug(ans)






    }
    
    return 0;
}
