#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

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
    	ll n,var=0;
    	cin>>n;
    	ll a[n];
    	f(i,0,n)	cin>>a[i];
    	sort(a,a+n,greater<>());

    	ll i=2;
    	while(i<n){
    		var+=a[i];
    		i+=3;
    	}

    	debug(var)

    }
    
    return 0;
}

