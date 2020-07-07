#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long int;
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

int main()
{
    vfast
    ll t;
    cin>>t;  
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n];
        f(i,0,n)    cin>>a[i];
        k+=1;
        
        f(i,0,n){
            if(i+k<=n)   b[i+k-1]=a[i];
            else{
                b[((i+k-1)%n)]=a[i];
            }
        }
        
            f(i,0,n)    cout<<b[i]<<" ";
        cout<<"\n";
        
        
        
        
    }
    
    return 0;
}
