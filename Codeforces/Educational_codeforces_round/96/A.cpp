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
ll a=0,n,t;
int32_t main()
{
    vfast
    cin>>t;
    while(t--)
    {
        a=0;
        cin>>n;
        if(n%3==0)  cout<<n/3<<" 0 0\n";
        else    if(n%5==0)  cout<<"0 "<<n/5<<" 0\n";
        else    if(n%7==0)  cout<<"0 0 "<<n/7<<"\n";
        else    if(n%3==1 and n<8)  debug(-1)
        else    if(n==8)    debug("1 1 0")
        else    if(n==10)   debug("0 1 1")
        else    if(n==11)   debug("2 1 0")
        else    if(n==13)   debug("2 0 1")
        else    if(n%3==1 and n>10){ a=(n-7)/3;cout<<a<<" "<<0<<" 1"<<"\n";}
        else   if(n%3==2 and n>=8){a=(n-5)/3;cout<<a<<" 1 0"<<"\n";}  
        else    debug(-1)                 
    }    
    return 0;
}
