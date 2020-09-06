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

ll t1=0,t2=0,t3=0,ans=0,var=0;

int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--)
    {
    	t1=0,t2=0,t3=0,ans=0,var=0;
    	ll n;
    	cin>>n;
    	ll a[n];
    	f(i,0,n){
    		cin>>a[i];
    	}

    	f(i,0,n){
    		if(a[i]>0){t2+=a[i];}
    		else	if(a[i]<0){
    			t3+=min(abs(a[i]),t2);
    			t2-=min(abs(a[i]),t2);
    		}
    	}
    	f(i,0,n){
    		t1+=abs(a[i]);
    	}

    	debug((t1-(2*t3))/2)

    	
    	   
        
    }
    
    return 0;
}
