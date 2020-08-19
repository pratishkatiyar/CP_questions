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

int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){ 
    	string s;
    	cin>>s;
    	map<char,ll>ml;
    	f(i,0,s.size()){
    		ml[s[i]]+=1;
    	}
    	ll x,y,n,a,b,g,h,o,p,bl=0,bl1=0;
    	cin>>x>>y;
    	//for(auto j:ml)  cout<<j.first<<" "<<j.second<<endl;
    	cin>>n;
    	while(n--){
    		bl=0,bl1=0;
    		cin>>a>>b;
    		g=a-x;
    		if(g>0 and ml['R']>=g)	bl=0;
    		else	if(g<0 and ml['L']>=abs(g))	bl=0;
    		else    if(g==0)    bl=0;
    		else	bl=1;
    		h=b-y;
    		if(h>0 and ml['U']>=h)	bl1=0;
    		else	if(h<0 and ml['D']>=abs(h))	bl1=0;
    		else    if(h==0)    bl1=0;
    		else	bl1=1;
    		
    		if(g==0 and h==0)   debug("YES 0")
    		else    if(bl==1 or bl1==1)	debug("NO")
    		else	cout<<"YES "<<abs(g)+abs(h)<<"\n";

    	}
        
    }
    
    return 0;
}
