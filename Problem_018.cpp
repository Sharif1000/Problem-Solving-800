--Problem Link: https://codeforces.com/contest/1684/problem/B


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
      int a, b, c; cin>>a>>b>>c;
      cout<<a+b+c<<" "<<b+c<<" "<<c<<endl;
    }
    return 0;
}