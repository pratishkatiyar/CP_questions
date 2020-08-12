#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x,y) cout<<x<<" "<<y<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007


int32_t main()
{
    vfast
    	ll n,m,x,y,row,col;
    	ll c=2;
    	map<pair<ll,ll>,ll> mq;
    	map<ll,ll> mz;

    	cin>>n>>m>>x>>y;
    	row=x;
    	col=y;
    	ll o=x,p=y;
    	mq[{x,y}]=1;
    	debug(o,p)
    	debug(o,1)
    	mq[{o,1}]=1;
    	row=1;
    	col=1;
    	while(c<n*m and col<=m){


    	if(row==1){
    		f(i,1,n+1){
    		if(mq[{i,col}]!=1){
    			debug(i,col)
    			mq[{i,col}]=1;
    			c+=1;
    			
    		}  	
    		row=i;

    	}
    	col+=1;
    	}
    	else{
    		for(ll i=row;i>0;i--){
    			if(mq[{i,col}]!=1){
    			debug(i,col)
    			mq[{i,col}]=1;
    			c+=1;
    			
    		}  
    		row=i;

    		}
    		col+=1;

    	}




    }

    
    
    return 0;
}
