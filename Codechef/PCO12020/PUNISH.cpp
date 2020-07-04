#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll=int;
using lld = long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(lld i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007;
string p="POSSIBLE";
string im="IMPOSSIBLE";

int main()
{
    vfast
    ll t;    
    cin>>t;
    while(t--){
        lld n,k,x=0,temp,var;
        cin>>n>>k;
        temp=(k-n)%(n-1);
        var=(k-n)/(n-1);
        if(k>n){
        if(var%2){
            debug(temp+1)
        }
        else{
            debug(n-temp)
        }}
        else    debug(k)
    }
    
    return 0;
}

