#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = int;
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
    	vector<ll>v;
    	ll x=0,y=0,u=0,w=0;
    	string s;
    	cin>>s;

    	for(int i=0;i<s.size();){
    		w=i;
    		while(s[i]=='1')	i++;
    		if(i!=w)	v.pb(i-w);
    		else	i++;
    	}
    	sort(v.begin(),v.end(),greater<>());
    	for(int i=0;i<v.size();i+=2){
    		u+=v[i];
    	}
    	debug(u)
    	
    }
    
    return 0;
}
 
