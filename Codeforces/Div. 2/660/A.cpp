#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<'\n';
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007


int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){  
        ll n;
        cin>>n;
        set <ll > s1;
        s1.insert(6);
        s1.insert(10);
        s1.insert(14);
        s1.insert(n-30);
        set <ll > s2;
        s2.insert(6);
        s2.insert(10);
        s2.insert(15);
        s2.insert(n-31);
        set <ll > s3;
        s3.insert(6);
        s3.insert(15);
        s3.insert(14);
        s3.insert(n-35);
        set <ll > s4;
        s4.insert(15);
        s4.insert(10);
        s4.insert(14);
        s4.insert(n-39);

        if(n-30>0 and s1.size()==4){debug("YES");for(auto i:s1) cout<<i<<" ";cout<<"\n";}
        else    if(n-31>0 and s2.size()==4){debug("YES");for(auto i:s2) cout<<i<<" ";cout<<"\n";}
        else    if(n-35>0 and s3.size()==4){debug("YES");for(auto i:s3) cout<<i<<" ";cout<<"\n";}
        else    if(n-39>0 and s4.size()==4){debug("YES");for(auto i:s4) cout<<i<<" ";cout<<"\n";}
        else    debug("NO")


        
    }
    
    return 0;
}

