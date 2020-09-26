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
#define infi 1000000007
ll var1,t1,t2,t3,t4,ans;
ll arr[100001];
ll modPow(ll a, ll x, ll p) {
	///https://stackoverflow.com/questions/19739492/calculating-ncr-mod-p-efficiently-when-n-is-very-large/19739683
    ll res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll modInverse(ll a, ll p) {
    return modPow(a, p-2, p);
}
ll modBinomial(ll n, ll k, ll p) {

    ll numerator = 1; 
    f(i,0,k){
        numerator = (numerator * (n-i) ) % p;
    }
    

    ll denominator = 1; 
    f(i,1,k+1){
        denominator = (denominator * i) % p;
    }

    return ( numerator* modInverse(denominator,p) ) % p;
}
ll bit=0;
int32_t main()
{
    vfast
    ll t;
    cin>>t;
    f(ui,0,t)
    {
    	var1=0;
    	t1=0;
    	t2=0;
    	t3=0;
    	t4=0;
    	ans=0;
    	bit=0;
    	ll n;
    	cin>>n;    	
    	f(i,0,n)	cin>>arr[i];

    	if(n==1)	debug(2)
    	else{
    		sort(arr,arr+n);
    		
    		var1=arr[n-1];
    		for(ll j=n-1;j>=0;j--){
    			if(arr[j]!=var1)	{j=-1;}
    			else	if(arr[j]==var1)	{bit+=1;}
    		}

    		if(bit&1){
    			debug(modPow(2,n,infi))
    		}else{
    			t3=modBinomial(bit,bit/2,infi)%infi;
    			var1=0;
    			t2=modPow(2,n-bit,infi)%infi;
    			t1=modPow(2,n,infi)%infi;
    			t4=(t2*t3)%infi;

    			ans=(t1-t4)%infi;

    			if(0>ans){
    				ans+=infi;
    				ans%infi;
    			}

    			debug(ans)
    		}
    	}
    	
    	   
        
    }
    
    return 0;
}
