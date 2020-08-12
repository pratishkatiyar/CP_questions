
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int r, g, b, w;
    cin >> r >> g >> b >> w;
    int t = (r%2 == 0) + (g%2 == 0) + (b%2 == 0) + (w%2 == 0);
    if(t >= 3)
    {
        cout << "Yes\n";
    }
    else if(t == 2)
    {
        cout << "No\n";
    }
    else if(min({r, g, b}) >= 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
