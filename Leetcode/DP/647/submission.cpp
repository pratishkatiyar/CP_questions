class Solution {
public:
    
    vector<vector<int>> dp, vis;
    int go(int i,int j,string s){
        
        if(i>=j) return 1;
        int &ans=dp[i][j];
        if(vis[i][j])   return ans;
        vis[i][j]=1;
        if(s[i]!=s[j])  return ans=0;
        ans=go(i+1,j-1,s);
        return ans;
    }
    
    int countSubstrings(string s) {        
        int ans=0,n=s.size();
        dp.resize(n,vector<int>(n,-1));
        vis.resize(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                ans+=go(i,j,s);
            }
        }
        return ans;        
    }
};
