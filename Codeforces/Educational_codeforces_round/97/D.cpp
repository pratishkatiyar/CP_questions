#include "bits/stdc++.h"
using namespace std;
#define chota(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define pure cout << fixed << setprecision(18)
#define ll long long int
#define newline cout << "\n"
#define vfast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 2e5 + 2;
int t;
int n;
int data[N];
 
int main() {
    vfast;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> data[i];
        data[n + 1] = -1;
 
        int ans = 0;
        int leftPointer = 1;
        int currentParentNode = 1;
        int totalParentNode = 1;
        int rightPointer = 2;
 
        while (rightPointer <= n) {
            if (data[rightPointer] < data[rightPointer + 1]) { 
                //do nothing
            } else {
                currentParentNode -= 1;
                if (currentParentNode == 0) {
                    ans += 1;
                    currentParentNode = rightPointer - leftPointer;
                    totalParentNode = currentParentNode;
                    leftPointer = rightPointer;
                }
            }
            rightPointer++;
        }
        if (currentParentNode != totalParentNode) ans++;
        cout << ans << endl;
    }
}
