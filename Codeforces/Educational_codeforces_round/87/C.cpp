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
double ve=3.141592653589793238;


int main()
{
    vfast
    ll t,a,b,c,d,n;
    double var,temp,g;
    cin>>t;
    while(t--){  
        cin>>n;
        temp=sin((ve/(n*2)));
        g=cos((ve)/(n*2));
        var=(g)/(temp);
        printf("%.9f",var);
        printf("\n");
        
        
        
        
    }
    
    return 0;
}
