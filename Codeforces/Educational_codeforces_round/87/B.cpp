#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,s) for(ll i=x;s[i]!='\0';i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
double ve=3.141592653589793238;
#define MOD 1000000007;
bool comp(int a, int b) 
{ 
    return (a < b); 
}
int main()
{
    vfast
    ll t,a,c,b,var,temp,g1,g2,h1,h2,ga,gb,ans;
    
    
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        c=-1;
        gb=0;
        var=INT_MAX;
        b=-1;
        ga=0;
        a=-1;
        f(i,0,s){
            if(s[i]=='1'){a=i;}
            if(s[i]=='2'){b=i;}
            if(s[i]=='3'){c=i;}
            if((a!=-1) and (b!=-1) and (c!=-1)){
                ga=min(a,b);
                ga=min(ga,c);
                gb=max(a,b);
                gb=max(gb,c,comp);
                var=min(var,gb-ga+1);
            }
        }
        temp=0;
        if((a!=-1) and (b!=-1) and (c!=-1)){
            ga=min(a,b);
            ga=min(ga,c);
            gb=max(a,b);
            gb=max(gb,c,comp);
            var=min(var,gb-ga+1);
        }
        ans=0;
        
        if(var==INT_MAX) {debug(0)}
        else    {debug(var)}
    
        
        
        
    }
    
    return 0;
}
