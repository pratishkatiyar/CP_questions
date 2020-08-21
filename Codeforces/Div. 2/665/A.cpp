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
    	ll n,k;
    	cin>>n>>k;
    	if(k>=n)	debug(abs(k-n))
    	else	if(n%2==0 and k%2==0)	{debug(0)}
    	else	if(n%2==0 and k%2!=0)	{debug(1)}
    	else    if(n%2!=0 and k%2!=0)	{debug(0)}
    	else{
    		debug(1)
    	}
        
    }
    
    return 0;
}
