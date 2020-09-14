#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define pdd pair<double, double>
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define debug(x,y) cout<<x<<" "<<y<<"\n";
pdd lineLineIntersection(pdd A, pdd B, pdd C, pdd D) 
{ 
    double a1 = B.second - A.second; 
    double b1 = A.first - B.first; 
    double c1 = a1*(A.first) + b1*(A.second); 
  
    double a2 = D.second - C.second; 
    double b2 = C.first - D.first; 
    double c2 = a2*(C.first)+ b2*(C.second); 
  
    double determinant = a1*b2 - a2*b1; 
  
    if (determinant == 0) 
    { 
        return make_pair(FLT_MAX, FLT_MAX); 
    } 
    else
    { 
        double x = (b2*c1 - b1*c2)/determinant; 
        double y = (a1*c2 - a2*c1)/determinant; 
        return make_pair(x, y); 
    } 
} 

int32_t main()
{
    vfast
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,small=INT_MAX,big=0,t1,t2;
    	double d1,d2;
    	map<pair<ll,ll>,double>mp;
    	pair<ll,ll>pi;
    	map<ll,ll>mi;
    	map<ll,double>mis;
    	map<ll,ll>m1;
    	set<ll>s1;
    	cin>>n;
    	ll a[n+1];
    	f(i,1,n+1){
    		cin>>a[i];
    	}

    	f(i,1,n+1){
    		f(j,i+1,n+1){
    			pdd A = make_pair(0, i); 
    			pdd B = make_pair(1, i+a[i]); 
    			pdd C = make_pair(0, j); 
    			pdd D = make_pair(1, j+a[j]);

    			pdd intersection = lineLineIntersection(A, B, C, D);

    			if (intersection.first==FLT_MAX && intersection.second==FLT_MAX) ;
    			else{
    				if(intersection.first>0)	{mp[{i,j}]=intersection.first;
    				mi[i]=1;
    				mi[j]=1;
    				if(mis[i]==0 or mis[i]>intersection.first)		mis[i]=intersection.first;
    				if(mis[j]==0 or mis[j]>intersection.first)		mis[j]=intersection.first;}
    			}
    		}
    	}    	

    	f(i,1,n+1){
    		if(mi[i]!=1){
    			small=1;
    			big=max(ll(1),big);
    		}else{
    			s1.clear();
    			d1=mis[i];
    			for(auto i1:mp){
    				pi=i1.first;
    				if((pi.first==i or pi.second==i) and d1<=i1.second){
    					if(pi.first!=i)	s1.insert(pi.first);if(pi.second!=i)	s1.insert(pi.second);
    				}
    			}

    			for(auto i1:s1){
    				if(i1>i)	pi={i,i1};
    				else	if(i1<i)pi={i1,i};
    				d2=mp[pi];
    				if(i1!=i and d2>=d1){
    				for(auto i2:mp){
    					pi=i2.first;
    					if((pi.first==i1 or pi.second==i1) and d2<=i2.second){
    						if(pi.first!=i)s1.insert(pi.first);if(pi.first!=i)s1.insert(pi.second);
    					}
    				}
    			}}


    			s1.insert(i);
    			t2=s1.size();


    			big=max(big,t2);
    			small=min(small,t2);
    		}    		
    	}

    	debug(small,big)





    }
    return 0;  
}


