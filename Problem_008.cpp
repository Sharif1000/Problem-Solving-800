--Problem Link: https://codeforces.com/contest/1950/problem/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin>>s;
        int h = 0;
        h +=(int(s[0]) - 48) * 10;
        h +=int(s[1]) - 48;


        if(h < 12 && h > 0){
          cout<<s<<" AM"<<endl;
        }
        else if(h == 0){
          s[0] = '1';
          s[1] = '2';
          cout<<s<<" AM"<<endl;
        }
        else if(h == 12){
          cout<<s<<" PM"<<endl;
        }
        else if(h > 12 && h < 22){
          cout<<0<<(h-12)<<":"<<s[3]<<s[4]<<" PM"<<endl;
        }
        else{
          cout<<(h-12)<<":"<<s[3]<<s[4]<<" PM"<<endl;
        }
    }
    return 0;
}
