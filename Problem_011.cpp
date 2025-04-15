--Problem Link: https://codeforces.com/contest/1985/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      string a,b; cin>>a>>b;
      string temp = "";
      temp[0] = a[0];
      a[0] = b[0];
      b[0] = temp[0];
      cout<<a<<" "<<b<<endl;
    }   
    return 0;
}
