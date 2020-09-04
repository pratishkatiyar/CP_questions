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
    	vector<ll>v;
    	ll x,y,n,n1=0,ans=0,u=0,s=0,d=0,l;
    	cin>>n>>x>>y;

    	d=y-x;

    	s=n-1;
    	n1=n;
    	l=y;

    	while(d%s!=0)	s-=1;

    	u=d/s;

    	while(n>0 and y>0){
    		v.pb(y);
    		y-=u;
    		n-=1;
    	}
    	y=u+l;

    	while(n>0){
    		v.pb(y);
    		y+=u;
    		n-=1;
    	}
    	sort(v.begin(),v.end());

    	for(auto i:v)	cout<<i<<" ";
    		cout<<"\n";






        
    }
    
    return 0;
}
