--Problem Link: https://codeforces.com/contest/1971/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool temp = true;
        for(int i=1; i < s.size(); i++){
          if(s[i] != s[i-1]){
            temp = false;
            swap(s[i],s[i-1]);
            break;
          }
        }
        (temp)? cout<<"NO"<<endl:cout<<"YES"<<endl<<s<<endl;
    }   
    return 0;
}
