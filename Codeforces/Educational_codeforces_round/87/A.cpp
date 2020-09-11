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
#define MOD 1000000007;


int main()
{
    vfast
    ll t,var,temp,a,b,c,d;
    cin>>t;
    while(t--){  
        cin>>a>>b>>c>>d;
        a=a-b;
        var=b;        
        if(a<=0)    debug(b)
        else    if(c-d<=0)  debug(-1)        
        else    {
            temp = a/(c-d)+(a%(c-d) > 0);
            var=var+(temp*c);
            debug(var)
        }        
    }
    
    return 0;
}
