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
#define MOD 1000000007
ll n,x,sz,q,t,var;
ll sum[100007];
ll seq[100007];
set<ll>r;
set<ll>o;

void func(){
    ll bl=-1,k;
    if(2<=r.size()) bl=90;
    else{
        if(r.size()==1){
            k=*(r.begin());
            if(8<=sum[k])   bl=90;
            else    if(2<=o.size()) bl=90;
            else    if(o.size()==1 and 6<=sum[k])   bl=90;
        }
    }
    if(bl==-1)  debug("NO")
    else    debug("YES")
    
}
void zero(){
    memset(sum, 0, sizeof(sum));
}
int32_t main()
{
    vfast
    zero();
    
    cin>>n;
    sz=n;
    while(sz--){
        cin>>seq[n-sz-1];
        sum[seq[n-sz-1]]+=1;
    }
    sz=0;
    while(sz++ < n){
        x=seq[sz];
        if(4<=sum[x])   r.insert(x);
        else{
            if(2<=sum[x])  o.insert(x);
        }
    }
    char ch;
    cin>>q;
    f(hj,0,q){
        
        cin>>ch>>var;
        if(ch=='+'){
            sum[var]+=1;
            if(sum[var]==4)   o.erase(var),r.insert(var);
            else    if(sum[var]==2)   o.insert(var);
        }
        else{
            sum[var]-=1;
            if(sum[var]==3)   o.insert(var),r.erase(var);
            else    if(sum[var]==1)   o.erase(var);
        }
        func();
        
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
