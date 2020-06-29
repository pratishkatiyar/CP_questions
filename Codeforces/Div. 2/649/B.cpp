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
ll n,ar[100007],b[100007],x,y,z;
int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        x=0;
        cin>>n;
        f(j,0,n)    cin>>ar[j];
        
        
        
        b[x++]=ar[0];
        
        f(j,1,n-1)
        {
            y=max(ar[j+1]-ar[j-1],-ar[j+1]+ar[j-1]);
            z=max(ar[j]-ar[j-1],-ar[j]+ar[j-1])+max(ar[j]-ar[j+1],-ar[j]+ar[j+1]);
            
            if(y<z) b[x++]=ar[j];
        }
        b[x++]=ar[n-1];
        
        debug(x)
                
        f(i,0,x)    {cout<<b[i]<<" ";}         
        cout<<"\n";
    }
    
    return 0;
}
