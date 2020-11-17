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
    	ll n,c0,c1,h;
	    cin>>n>>c0>>c1>>h;
	    string x;
	    cin>>x;
	    ll one=0,zer=0;
	    ll ans=0;
	    f(i,0,n){
	        if(x[i]=='0'){
	            ans+=min(c0,c1+h);
	        }
	        else{
	            ans+=min(c1,c0+h);
	        }
	    }
	    debug(ans)        
    }    
    return 0;
}
