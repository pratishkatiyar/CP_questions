#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x) for(ll i=x;i>=0;i--)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x;
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
    	char seq[8][8];
    	ll n;
    	cin>>n;

    	f(w1,7){
    		ll w2=7;
    		while(w2>=0){
    			if(w1==7 && w2==7 and 1==1)  seq[w1][w2]='O',n-=1;
            	else    if(n>0)   {seq[w1][w2]='.';n-=1;}
            	else    seq[w1][w2]='X';
            	w2-=1;
    		}
    	}

    	ll e1=0,e2=0;
    	while(e1<=7){
    		e2=0;
    		while(e2<=7){
    			debug(seq[e1][e2])
    			e2+=1;
    		}
    		cout<<'\n';    		e1+=1;
    	}


    	
    }
    
    return 0;
}

