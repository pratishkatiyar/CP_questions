#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using namespace std;
#define fi  first
#define se	second
#define lb	lower_bound
#define up	upper_bound
#define pb	push_back
#define mp	make_pair
#define ll long long
#define num 1000000007
#define inf 1000000000
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x)	  x.begin(),x.end()
#define rev(x)	  x.rbegin(),x.rend()
#define forn(x,a,b) for(int x=a;x<=b;x++)
#define Pi		  pair<int,int>
#define Vi		  vector<int>

int a=0;
vector<Vi>A;
vector<bool>vis;

void dfs(int p){
	a++;
	for(int x:A[p]){
		if(!vis[x]){
			vis[x]=true;
			dfs(x);
		}
	}
}
void solve() {
	int n,k;
	cin>>n>>k;
	A.assign(n,Vi());
	vis.assign(n,false);
	while(k--){
		int a,b;
		cin>>a>>b;
		A[a].pb(b);
		A[b].pb(a);
	}
	Vi ans;
	for(int i=0;i<n;i++){
		if(!vis[i]) {
			vis[i]=true;
			a=0;
			dfs(i);
			ans.pb(a);
		}
	}
	sort(all(ans));
	cout<<ans.size()<<"\n";
	for(int x:ans)
	cout<<x<<" ";
	cout<<"\n";
}
 
int32_t main() {
	vfast
	int tc=1;
	cin>>tc;
	while(tc--)
		solve();
}

