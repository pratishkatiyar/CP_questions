#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define debug(x) cout<<x<<"\n";
int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--)
    {
    	ll x;
    	string s,w="";
    	ll m;
    	cin>>s;
    	f(i,0,s.size()){
    		w=s[i];
    		x=stoi(w);
    		cout<<x-2;
    	}
    	cout<<"\n";
    }    
    return 0;
}
