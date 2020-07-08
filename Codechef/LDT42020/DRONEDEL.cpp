#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007;

int main()
{
    vfast
    ll n,d;
    cin>>n>>d;
    ll a[n];
    f(i,0,n)    cin>>a[i];
    sort(a,a+n);
    ll var=abs(a[0]-d);
    f(i,0,n){
        ll temp=abs(a[i]-d);
        var=__gcd(temp,var);
    }
    debug(var)
    
            
    return 0;
}



