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
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll x=n%7;
    	if(x==0 or x==1)	debug("83")
    	else	if(x==2 or x==6)	debug("83 83")
    	else	if(x==3 or x==5)	debug("83 83 69")
    	else	if(x==4)	debug("83 83 69 67")
    }    
    return 0;
}
