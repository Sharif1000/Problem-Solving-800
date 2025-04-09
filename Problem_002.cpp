--Problem Link: https://codeforces.com/contest/2093/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        if (k % 2 == 1) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
    return 0;
}
