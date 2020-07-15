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
string v="Vivek";
string s="Ashish";
ll n,m,ans,res,temp,x,y,z,c,var;
ll ar[57][57];
int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        var=0;
        f(j,0,n){f(k,0,m){   cin>>ar[j][k];}}
        temp=0;
        f(i,0,n){
            f(j,0,m){
                if(ar[i][j]==0){
                    x=0;y=0;
                    f(k,0,n)    if(ar[k][j]==0) x+=1;
                    f(k,0,m)    if(ar[i][k]==0) y+=1;
                    if(y==m and x==n)   {ar[i][j]=1;var+=1;}
                }
            }
        }
                
        if(var%2)   debug(s)
        else    debug(v)        
        
    }
    
    return 0;
}
