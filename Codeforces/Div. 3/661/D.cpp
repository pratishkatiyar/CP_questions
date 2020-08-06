#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int N = 1e9 + 7;
typedef long long int ll;

int main() {
    IOS ;
    int t ; cin >> t ; while(t--) {
        int n ; cin >> n ; string str ; 
        cin >> str ; vector<int> v ;
        
        int c = 0, c0 = 0, c1 = 0 ;
        for(int i=0; i<n; i++) 
        if(str[i] == '0') {
            if(c1) v.push_back(c-c0), c1--; 
            else c++, v.push_back(c) ;
            c0++ ;
        } else {
            if(c0) v.push_back(c1+1), c0-- ; 
            else c++, v.push_back(c) ;
            c1++ ;
        }
        
        cout << c << endl ;
        for(int i=0; i<v.size(); i++) cout << v[i] << " " ;
        cout << endl ;
     }
    return 0 ;
}
