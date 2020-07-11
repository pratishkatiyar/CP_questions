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
    	string a,b;
    	cin>>a;
    	cin>>b;

    	for(ll i=0;i<b.size();i++){
    		a.erase(remove(a.begin(), a.end(), b[i]), a.end());
    	}

    	debug(a)

    }
    
    return 0;
}

