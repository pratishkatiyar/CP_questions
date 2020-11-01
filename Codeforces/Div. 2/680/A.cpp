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
    	bool flag=true;
    	ll n,x;
    	cin>>n>>x;
    	ll a[n],b[n];
    	f(i,0,n)	cin>>a[i];
    	f(i,0,n)	cin>>b[i];
    	sort(a,a+n);
    	sort(b,b+n,greater<>());
    	f(i,0,n){
    		if(a[i]+b[i]>x)	{
    			flag=false;
    			continue;
    		}
    	}
    	if(flag)	debug("Yes")
		else	debug("No")        
    }
    return 0;
}
