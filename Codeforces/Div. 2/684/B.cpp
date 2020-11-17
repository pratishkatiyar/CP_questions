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
ll a[1000005];
int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
    	ll n,b,c,d,e,f,i,j=0,k,l=0,z;
 
       cin>>n>>k;
       z=n*k;
       f(i,1,z+1)
       {
           cin>>a[i];
       }
       c=n/2;
       for(i=z-c;i>=1;i-=(c+1))
       {
           l+=a[i];
           j++;
           if(j==k) break;
       }
       debug(l)     
    }    
    return 0;
}

