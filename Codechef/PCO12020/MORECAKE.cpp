#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll=int;
using lld = long long int;
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
string p="POSSIBLE";
string im="IMPOSSIBLE";

int main()
{
    vfast
    ll t;
    lld x=0,z=0;
    cin>>t;
    while(t--){
        ll n,k,r;
        lld s,var=0,temp=0,ans=0,res=0,e=0,l=0;
        cin>>s>>n>>k>>r;
        x+=s;
        var=k;
        res+=var;
        f(i,1,n){
            var*=(r);
            res+=var;
        }
        
        z+=res;
        
        if(s>=res){
            cout<<p<<" "<<s-res<<"\n";
        }
        else{
            cout<<im<<" "<<res-s<<"\n";
        }
        
    }
    if(x>=z)    cout<<p<<" "<<"\n";
    else    cout<<im<<" "<<"\n";
    
    
    return 0;
}

