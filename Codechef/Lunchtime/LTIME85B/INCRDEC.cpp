#include <bits/stdc++.h>

using namespace std;
const int a=2e5+1;
int aa[a];
int solve(){
    memset(aa,0,sizeof aa);
    int n;
    cin>>n;
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        aa[x]++;
        mx=max(mx,x);
    }

    vector<int> v;
    for (int i = 1; i <= mx; i++)
    {
        if(aa[i]>0){
            if(i==mx){
            if(aa[i]>1){
                cout<<"NO";
                return 0;
            }
            v.push_back(i);
            }else{
                if(aa[i]>2){
                cout<<"NO";
                return 0; 
                }else if(aa[i]>0){
                v.push_back(i);
                aa[i]--; 
                }
            }
        }  
    }

    cout<<"YES"<<"\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    for (int i = mx-1; i > 0; i--){
        if(aa[i]>0) cout<<i<<" ";
    }
    
    
    return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve(),cout<<"\n";  
  return 0;
}
