#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(long i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define MOD 1000000007

typedef struct stu{
    ll x,y,ind;
}st;
int cmpi(const void *aptr, const void *bptr)
{
    int a = ((st *)aptr)->ind, b = ((st *)bptr)->ind;
    return (a < b) - (a > b);
}
int cmpy(const void *aptr, const void *bptr)
{
    int a = ((st *)aptr)->y, b = ((st *)bptr)->y;
    return (a > b) - (a < b);
}
int cmpx(const void *aptr, const void *bptr)
{
    int a = ((st *)aptr)->x, b = ((st *)bptr)->x;
    return (a < b) - (a > b);
}

int32_t main()
{
    vfast
    long n;
    ll f,g;
    cin>>n;
    st *s = (st *)malloc(sizeof(st) * n);
    f(i,0,n){
        cin>>f>>g;
        s[i].x=f;
        s[i].y=g;
        s[i].ind=i+1;
    }

    qsort(s, n, sizeof(st), cmpi);
    qsort(s, n, sizeof(st), cmpx);
    qsort(s, n, sizeof(st), cmpy);



    f(i,0,n)    cout<<s[i].ind<<" ";




    return 0;
}

