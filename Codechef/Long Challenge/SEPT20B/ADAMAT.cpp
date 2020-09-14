#pragma GCC optimize ("-O3")
#include <iostream>
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

ll s1[65][66],t1,a1,n,t,o1,o2,o3;
void sol1()
{	o1=0;
	while(o1<n){
		t1=n-1-o1;
		if(s1[0][t1]!=t1+1){
			a1+=1;
			o2=0;
			while(o2<t1+1){
				o3=o2+1;
				while(o3<t1+1){
					s1[o2][o3]=((s1[o2][o3])+(s1[o3][o2]));
					s1[o3][o2]=((s1[o2][o3])-(s1[o3][o2]));
					s1[o2][o3]=((s1[o2][o3])-(s1[o3][o2]));
					o3+=1;
				}
				o2+=1;
			}
		}
		o1+=1;
	}
	debug(a1)

}
int32_t main()
{
    vfast
    cin>>t;
	
    f(ip,0,t)
    {
    	t1=0;
    	a1=0;
    	cin>>n;
    	f(l1,0,n){
    		f(l2,0,n){
    			cin>>s1[l1][l2];
    		}
    	}
    	sol1();	  	
    }    
    return 0;
}
