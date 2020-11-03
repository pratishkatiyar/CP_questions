#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = int;
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
vector<vector<ll>> vis;
vector<vector<ll>> dp;
ll go(ll x, ll y, vector<vector<ll>> &vec){

	if(x>2)	return 0;

	if(y==-1 or y==3)	return 1e3;

	ll &ans=dp[x][y];
	if(vis[x][y])	return ans;

	ans=min(ans,vec[x][y]+go(x+1,y,vec));

	ans=min(ans,vec[x][y]+go(x+1,y+1,vec));

	ans=min(ans,vec[x][y]+go(x+1,y-1,vec));

	vis[x][y]=1;
	
	return ans;
}
int32_t main()
{
    vfast
    vis.resize(3,vector<ll>(3,0));
    dp.resize(3,vector<ll>(3,INT_MAX));

    vector<vector<ll>>vec={{1,2,3},{4,5,6},{7,8,9}};
    ll ans=INT_MAX;
    f(i,0,3){
    	ans=min(ans,go(0,i,vec));
    }


    debug(ans)



    return 0;
}
