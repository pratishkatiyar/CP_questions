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
    //    isprime();
    //    xsieve();

    ll t;
    cin>>t;
    while(t--){
    	map<ll,ll>hash;
    	ll n,m,w,var,x,y,bl=0;
    	cin>>n>>m;

    	f(q,0,n){
    		cin>>w;
    		hash[w]+=1;
    	}

    	f(q,1,m){

    		if(hash[q]==0)	var=-1,bl=1;
    	}


    	if(bl==0){
    		var=1+n-1;

    		if(hash[m]>ll(0))	var=var+1-hash[m]-1;



    	}

    	debug(var)


    	
    }

    
    return 0;
}
