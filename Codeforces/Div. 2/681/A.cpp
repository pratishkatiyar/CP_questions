#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,n;
        cin>>n;
        a=n*4;
        while(n--)
        {
            cout<<a<<" ";
            a-=2;
        }
    }
}
