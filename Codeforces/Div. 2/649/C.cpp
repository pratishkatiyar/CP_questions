#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define pf pop_front
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007;
ll n,x;
int main()
{
    vfast
    ll a[100007],b[100007],bl=0;
    f(j,0,100007){b[j]=-9;}
    n=0;
    deque<ll>dv;
    x=-1;
    cin>>n;
    
    f(k,1,n+1){cin>>a[k];}    
    ll j=1;
    
    while(j<n+1 and bl==0)
    {
        if(a[j]==a[j-1])    dv.pb(j);
        else
        {
            b[j]=a[j-1];
            ll k=1+a[j-1];
            while(k<a[j] and bl==0)
            {
                if(dv.size()==0)
                {
                    debug(-1)
                    bl=10;
                    continue;
                }
                
                b[dv[0]]=k;
                dv.pf();
                k++;
            }
        }
        j++;
    }
    
    
    
    ll w=1,p=1000000;
    
    while(w<n+1){
        if(b[w]!=-9){cout<<b[w]<<" ";}
        else{cout<<p<<" ";}
        w++;
        
    }
    
    cout<<"\n";
    return 0;
}
