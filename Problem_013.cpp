--Problem Link: https://codeforces.com/contest/1999/problem/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
      int n; cin>>n;
      int sm = 0;
      while(n > 0){
        sm += n % 10;
        n /=10;
      }
      cout<<sm<<endl;
    }
    return 0;
}
