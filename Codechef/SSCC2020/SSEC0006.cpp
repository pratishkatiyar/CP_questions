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
ll pr[1000001]={0};
void isprime()
{  
    pr[1]=1;
    for(ll a=2;a*a<=1000001;a++)
    {
        if(!pr[a])
        {
            for(ll b=a*a;b<1000001;b+=a)
            {
                pr[b]=1;
            }
        }
    }
}

int32_t main()
{
    vfast
    isprime();
    ll a,b;
    ll x,y;
    vector<ll>p;
    vector<pair<ll,ll>> v;
    cin>>a>>b;
    f(i,a,b+1){
    	if(pr[i]==0)	p.pb(i);
    }

    x=a*b;
    y=x/4;

    f(i,0,p.size()){
    	f(j,i+1,p.size()){
    		if(p[i]*p[j]>=y and p[i]*p[j]<=x)	v.pb(mp(p[i],p[j]));
    	}
    }

    for(auto i:v){
    	cout<<i.first<<","<<i.second<<"\n";
    }

    
    return 0;
}
