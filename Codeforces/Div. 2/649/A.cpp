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
ll n,k,v,a,b;
ll ar[100007];
int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        v=0;
        ll count=0,z,y;
        a=0;b=0;
        cin>>n>>k;
        f(j,0,n){cin>>ar[j];count+=ar[j];}
        //debug(count)
        while(ar[a]%k==0 and a<n)   a+=1;
        y=a;
        while(ar[-1+n-b]%k==0 and n>b)  b+=1;
        z=b;
        if(count%k==0){
            if(z>a) z=a;
            debug(n-1-z)
        }
        else    debug(n)
    }
    
    return 0;
}
