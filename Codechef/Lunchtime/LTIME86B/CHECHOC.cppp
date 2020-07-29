
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,m,x,y;
        long long  ans;
        cin>>n>>m>>x>>y;
        int a=std::min(x,y);
        int b=std::min(y-a,x);
        int ev=(n*m)/2;
        int odd=n*m-ev;
        ans =a*odd+b*ev;
        if(n==1&&m==1)ans=x;
        
        cout<<ans<<endl;
    }

    return 0;
}
