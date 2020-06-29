#include<bits/stdc++.h>
#define mod 1000000007
#define int long long int
#define phi 1.6180339
#define rep(i,n) for(auto i=0;i<(n);i++)
#define endl "\n"
#define For(i,a,b) for(auto i=(a);i<(b);i++)
#define op1 cin.tie(NULL)
#define op2 cout.tie(NULL)
#define op3 std::ios_base::sync_with_stdio(false)
#define MAXX 1000001
using namespace std;
int arr[MAXX];
bool winner(char a,char b)
{
    if(a=='R'&&b=='S') return true;
    if(a=='S'&&b=='P') return true;
    if(a=='P'&&b=='R') return true;
    return false;
}
void trozen()
{
    int t;
    cin>>t;
    vector<int> ans(3,0);
    while(t--)
    {
        string s="";
        char c;
        rep(i,3) cin>>c,s+=c;
        rep(i,3) rep(j,3)
        {
            if(i!=j)
            {
                if(s[i]!=s[j])
                {
                    if((winner(s[i],s[j]))) ans[i]++;
                    else ans[i]--;
                }
            }
        }
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
}
int32_t main()
{
    op1;op2;op3;
    int t;
    cin>>t;
    rep(i,t)
        trozen();
    return 0;
}
