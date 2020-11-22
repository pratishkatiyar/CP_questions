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
    	ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        s='$'+s;
        while(q--){
            ll l,r;
            cin>>l>>r;
            
            ll ans=0;
            
            f(i,0,l){
                if(s[i]==s[l]){
                    ans=1;
                }
            }
            f(i,r+1,n+1){
                if(s[i]==s[r]){
                    ans=1;
                }
            }
 
            if(ans)	debug("YES")
            else	debug("NO")
            
 
        }  	
    }    
    return 0;
}

