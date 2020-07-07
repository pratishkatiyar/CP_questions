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
    ll t;
    cin>>t;  
    while(t--){
        int bl=9;
        ll ans=0;
        string s;
        cin>>s;
        
        for(ll i=0;s[i]!='\0';i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')   bl=0;
            else    bl=1;
            ans+=(pow(2,(s.size())-i-1)*bl);
            ans=ans%MOD;            
        }
        debug(ans)
        
        
        
    }
    
    return 0;
}
