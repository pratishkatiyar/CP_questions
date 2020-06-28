#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
    f(test,0,t)
    {   
        map<ll,ll>hash;
        ll n,k;
        cin>>n>>k;
        ll ar[n];
        f(i,0,n) {   cin>>ar[i];
            if(ar[i]%k>0)hash[k-(ar[i]%k)]+=1;
        }
        ll e=0;
        for(auto j:hash){
            if(e<(((j.second-1)*k)+(j.first+1)))    e=(((j.second-1)*k)+(j.first+1));
        }
        debug(e)


    
    }    
    return 0;
}
