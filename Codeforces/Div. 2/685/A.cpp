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
    ll t,x,y,z;
    cin>>t;
    while(t--){
    	  ll n;
        cin>>n;
        ll ans=0;
        if(n==1)	ans=0;
        else if(n==2)	ans=1;
        else if(n==3)	ans=2;
        else if(n%2==0)	ans=2;
        else	ans=3;
        
        debug(ans)   
        
    }    
    return 0;
}

