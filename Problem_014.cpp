--Problem Link: https://codeforces.com/contest/1999/problem/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
      int tt; cin>>tt;
      int s,m; cin>>s>>m;
      bool res = false;
      bool flag = true;
      int fst, snd;
      while(tt--){
        int a,b;
        cin>>a>>b;
        if(flag == true){
          if(a >= s ) res = true;
          flag = false;
        }
        else{
          if(a - snd >= s) res = true;
        }
        fst = a;
        snd = b;
      }
      if(m - snd >= s) res = true;
      (res) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
