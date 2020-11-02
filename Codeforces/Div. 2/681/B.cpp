#include <bits/stdc++.h>
using namespace std;
typedef long long int64;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int64 Tc = 1; cin >> Tc;
  while(Tc--)
  {
    int64 A, B;
    cin >> A >> B;
    string S; cin >> S;
    int64 n = S.size();
    int64 res = 0, cur = -1e9;
    for(int64 i=0; i<n; ++i)
    {
      if(S[i] == '0') continue;
      int64 tmp = i - cur; --tmp;
      res += min(A, B*tmp);
      cur = i;
    }
    cout << res << "\n";
  }
  return 0;
}
