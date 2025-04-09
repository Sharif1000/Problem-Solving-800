--Problem Link: https://codeforces.com/contest/2093/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int cnt = 0;
        int f = 0;
        for(int i = n.size()-1; i >= 0; i--){
          if(n[i] == '0' && f == 0) cnt++;
          else if(int(n[i]) - 48 > 0 && f == 0) f = 1;
          else if(int(n[i]) - 48 > 0 && f == 1) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
