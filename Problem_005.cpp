--Problem Link: https://codeforces.com/contest/1926/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        bool temp = true;
        for(int i = 0; i < n; i++){
          string s; cin>>s;
          int cnt = 0;
          for(char c:s){
            if(c == '1') cnt++;
          }
          if(cnt == 1) temp = false;
        }
      (temp) ? cout<<"SQUARE"<<endl:cout<<"TRIANGLE"<<endl;
    }
    return 0;
}
