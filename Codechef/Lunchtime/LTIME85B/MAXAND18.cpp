#pragma GCC optimize ("-O3")
#include<bits/stdc++.h>
#define ll long long int
#define mk make_pair
#define pb push_back
#define INF (ll)1e18
#define pii pair<ll,ll>
#define mod 1000000007 //998244353
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fb(i,a,b) for(ll i=a;i>b;i--)
#define ff first
#define ss second
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cout<<x<<"\n";
using namespace std;
ll pow_mod(ll a,ll b)
{
	ll res=1;
	while(b!=0)
	{
		if(b&1)
		{
			res=(res*a)%mod;
		}
		a=(a*a)%mod;
		b/=2;
	}
	return res;
}
bool compi(pii &a,pii &b)
{
    if(a.ff!=b.ff)
    return a.ff>b.ff;
    
    return a.ss<b.ss;
}
void solve()
{
   ll n,k;
   
   cin>>n>>k;
   
   ll a[n];
   
   f(i,0,n)
   cin>>a[i];
   vector<pii>v;
   
   for(ll i=0;i<33;i++)
   {
       ll sm=0;
       
       for(ll j=0;j<n;j++)
       {
           if(a[j]&(1LL<<i))
           {
               sm+=(1LL<<i);
           }
       }
       if(sm!=0)
       v.pb({sm,i});
   }
   
   ll ans=0;
   
   sort(v.begin(),v.end(),compi);
   
   
   for(ll i=0;i<v.size();i++)
   {
       ll indx=v[i].ss;
       ans+=(1LL<<indx);
       k--;
       if(k==0)
       break;
   }
   
   for(ll i=0;i<34;i++)
   {
       if(k==0)
       break;
       
       if((ans&(1LL<<i))==0)
       {
           ans+=(1LL<<i);
           k--;
       }
   }
   
   
   debug(ans)
}
int32_t main(){	vfast
	
  ll t;
  t=1;
  cin>>t;
  while(t--)
  solve();
  
    return 0;
}
