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


int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        ll t3=0,t2=0,bl=0;x=n;
        while(n%3==0){
            t3+=1;n/=3;
        }
        while(n%2==0){
            n/=2;
        }
        if(n!=1)    bl=1;
        n=x;
        while(n%2==0){
            t2+=1;n/=2;
        }


        if(x==1)    debug(0)
        else    if(bl==1)   debug(-1)
        else    if(t2==0 and t3==0) debug(-1)
        else    if(t2>t3)   debug(-1)
        else    if(t2==t3)  debug(t2)
        else{
            ll g=t3-t2;
            debug(t3+g)
        }

    }    
    return 0;
}
