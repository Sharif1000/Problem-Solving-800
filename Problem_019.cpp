-- Problem Link: https://codeforces.com/contest/1913/problem/A

Method 01:

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      bool flag = true;
      for(int i = 1; i < s.length(); i++){
        string a = s.substr(0,i);
        string b = s.substr(i);
        if(s[i] != '0' && (stoi(a)) < stoi(b)){
          cout<<a<<" "<<b<<endl;
          flag = false;
          break;
        }
      }
      if(flag) cout<<-1<<endl;
    }
    return 0;
}


Method 02:

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      string a = "", b = "";
      int i = 1;
      while(i < s.length()){
        if(s[i] != '0') break;
        else i++;
      }
      for(int j = 0; j < i; j++) a +=s[j];
      for(int j = i; j < s.length(); j++) b +=s[j];
      
      if(b.empty()) cout<<-1<<endl;
      else if(stoi(a) >= stoi(b)) cout<<-1<<endl;
      else cout<<a<<" "<<b<<endl;
    }
    return 0;
}
