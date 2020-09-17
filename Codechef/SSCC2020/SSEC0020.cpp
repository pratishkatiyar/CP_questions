#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n"
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007


int32_t main()
{
    vfast
    ll t;
    string s,w;
    ll n,x;
    cin>>s;
    n=s.size();
    f(i,0,s.size()){
    	w=s.substr(0,i+1);
    	x=stoi(w);
    	if(x%n!=0)	{debug("No");return 0;}
    	else	n-=1;
    }
    debug("Yes");
    
    return 0;
}
