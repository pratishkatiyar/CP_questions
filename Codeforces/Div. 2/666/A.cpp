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
    	map<ll,ll>mz;
    	string s;
    	ll bl=0;
    	ll n;
    	cin>>n;
    	f(i,0,n){
    		cin>>s;
    		f(j,0,s.size()){
    			mz[s[j]]+=1;
    		}
    	}

    	for(auto u:mz){
    		if(u.second%n!=0)	{bl=1;break;}
    	}

    	if(bl==0)	debug("YES")
    	else	debug("NO")
        
    }
    
    return 0;
}
