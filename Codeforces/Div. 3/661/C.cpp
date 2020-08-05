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

ll func(ll arr[], ll w, ll n){
    map<ll,ll>m;
    ll var=0;
    f(i,0,n){
        f(j,1+i,n){
            if(arr[i]+arr[j]==w and m[i]!=ll(2) and m[j]!=ll(2)){
                m[i]=2;
                m[j]=2;
                var+=1;
                break;
            }
        }
    }
    return var;
}
int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){   
        set<ll>s;
        ll n,ans=0;
        cin>>n;
        ll a[n];
        f(i,0,n){
            cin>>a[i];
        }
        if(n==1){
            debug(0)
            continue;
        }
        sort(a,a+n);
        //f(i,0,n)    cout<<a[i]<<" ";cout<<endl;
        f(i,0,n){
            f(j,i+1,n){
                s.insert(a[i]+a[j]);
            }
        }
        for(auto x:s){
            //debug(x)
            //cout<<x<<"->"<<func(a,x,n)<<endl;
            ans=max(ans,func(a,x,n));
        }
        
        debug(ans)
        
    }
    
    return 0;
}
