#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007
string x="()";

int32_t main()
{
    vfast
    ll t;
    cin>>t;
    f(test,0,t)
    {   ll n;
        cin>>n;
        string s;
        cin>>s;
        ll w=0;
        size_t pos = std::string::npos;
        while ((pos  = s.find(x) )!= std::string::npos) s.erase(pos, x.length());

        debug(s.size()/2)
    
    }    
    return 0;
}
