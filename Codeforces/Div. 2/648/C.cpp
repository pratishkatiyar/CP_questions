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
#define MOD 1000000007;

ll n,var,g,f;
ll ar1[200007];
ll ar2[200007];
ll x[200007];

int main()
{
    vfast
            
    
    map<ll,ll> mq;        
    cin >> n;
    f(j,0,n){cin>>ar1[j];}
    f=0;
    f(k,0,n){cin>>ar2[k];g=0;x[ar2[k]]=k;}
    var=0;
    f(y,0,n){
        if(y<x[ar1[y]]){mq[n-x[ar1[y]]+y]+=1;f+=1;}
        else    {mq[y-x[ar1[y]]]+=1;g+=1;}        
    
    }
    
    f=0;
    for(auto z: mq){
        var=max(var,z.second);
    }
    
    
    debug(var)
    
    return 0;
}
