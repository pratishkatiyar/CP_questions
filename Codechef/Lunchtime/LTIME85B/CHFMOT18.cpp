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

int main()
{
	int test;
	cin>>test;
	while(test--) {
		int s,n;
		cin>>s>>n;
		int coins = 0;
		while(s!=1 && s!=0){
			coins += int(s/n);
			s = s%n;
			n = s>=(n-2)?(n-2):(s-s%2);
		}
		if(s==1)
		coins = coins + 1;
		cout<<coins<<"\n";
	}
	return 0;
}
