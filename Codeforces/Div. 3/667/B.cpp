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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll a,b,x,y,n;
    	ll ans=0,var=0,t1=0,x1,y1,a1,b1;
        cin>>a>>b>>x>>y>>n;

        if(a<b){
        	swap(a,b);
        	swap(x,y);
        }
        x1=x;y1=y;
        a1=a,b1=b;
        //cout<<a<<" "<<b<<" ";

        b=max(y,b-n);
        var=n-(b1-b);
        //cout<<var<<" "<<b<<endl;

        a=max(x,a-var);
        
        ll z1=a*b,z2;
        
        a=a1,b=b1;
        a=max(x,a-n);
        var=n-(a1-a);
        
        b=max(y,b-var);
        z2=a*b;
        
        
        

        debug(min(z1,z2))


    }
    
    return 0;
}
