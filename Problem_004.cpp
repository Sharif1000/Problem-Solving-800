--Problem Link: https://codeforces.com/contest/1926/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        int a = 0, b = 0;
        for(int i = 0; i < 5; i++){
          if(n[i] == 'A') a++;
          else b++;
        }
        (a > b) ? cout<<"A"<<endl:cout<<"B"<<endl;
    }
    return 0;
}
