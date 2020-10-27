#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        ll count_one = 0, count_zero = 0;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                int count = 0;
                while (s[i] == '1')
                {
                    count++;
                    i++;
                }
                count_one += count - 1;
            }
            else
            {
                int count = 0;
                while (s[i] == '0')
                {
                    count++;
                    i++;
                }
                count_zero += count - 1;
            }
            i--;
        }
        cout<<max(count_one, count_zero)<<"\n";
    }
    return 0;
}
