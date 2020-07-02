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
    //    isprime();
    //    xsieve();

    ll t;
    cin>>t;
    while(t--){


map<ll,ll>hash;
        ll x=0,y=0,j=0,k1=-1,l=0,w,var=0;
        ll n,b,m;
        cin>>n>>b>>m;
        
        f(q,0,n) hash[q]=q/b;   
        
        f(q,0,m){
            cin>>w;
            if(k1!=hash[w]) var+=1;
            k1=hash[w];
        }
        
        
        debug(var)

    	
    }

    
    return 0;
}
