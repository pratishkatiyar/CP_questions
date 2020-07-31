#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rem 1000000007

ll fun(ll a,ll b)
{
	ll res=a;
	while(a>0)
	{
		b=b*2;
		a=a/2;
		//cout<<"B:"<<b<<" A:"<<a<<" RES:"<<res<<"\n";
	}
	return res+b;
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll i,j,k,n,m,x,y;
		cin>>n;
		
		if(n<=100)
		{
			ll a[n]={};
		for(i=0;i<n;i++) cin>>a[i];
		
		ll ans=0;
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				ans=max(ans, abs(fun(a[j],a[i])-fun(a[i],a[j])) ) ;
			}
		}
		cout<<ans<<"\n";
		}
		else
		{
		
		
		ll a[n]={};
		k=0;
		for(i=0;i<n;i++) cin>>a[i],k=max(k,a[i]);
		
		ll ans=0;
		
		for(i=0;i<n;i++)
		{
			if(a[i]!=k)
			{
				ans=max(ans, abs(fun(k,a[i])-fun(a[i],k)) ) ;
			}
		}
		cout<<ans<<"\n";
		// cout<<"X:"<<x<<" Y:"<<y<<"\n";
		
		}
		
		
	}
}
