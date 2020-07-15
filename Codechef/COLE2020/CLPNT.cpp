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
    map<ll,ll>m; 
        ll n,w;
        cin>>n;
        vector<ll>ar;
        f(i,0,n){
            cin>>w;
            ar.pb(w);
            m[w]=1;
        }
        sort(ar.begin(), ar.end());
        ll q,x,y,e;
        cin>>q;
        while(q--){
            cin>>x>>y;            
            if(m[x+y]==1)   debug(-1)
            else{   
                e=x+y;
                std::vector<ll>::iterator g;
                g=lower_bound(ar.begin(), ar.end(), e);


                debug(g-ar.begin())
            }
        }
     

        
    }
    
    return 0;
}

