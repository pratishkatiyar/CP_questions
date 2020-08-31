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
ll n;
ll ar1[507],ar2[507],x,y,res,temp,var,bl;

string e="Yes";
string o="No";
int main()
{
    vfast
            
    ll t;
    cin>>t;
    while(t--){
        
        bl=1;
        x=0;
        res=1;
        cin>>n;
        y=0;
        f(i,0,n)    cin>>ar1[i];
        temp=0;
        f(i,0,n)    cin>>ar2[i];
        var=0;
        
        f(j,0,n-1){
            if(ar1[j]>ar1[j+1])  bl=0;
            x+=1;
            
            if(ar2[j+1]!=ar2[j])    res=0;
            y+=1;
            
            
        }
        
        x=0;y=0;
        if(bl==1)   debug(e)
        else    if(res==0)          debug(e)
        else    debug(o)        
        
        
    }
    
    return 0;
}
