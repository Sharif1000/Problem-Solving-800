-- Problem Link:https://codeforces.com/problemset/problem/47/A

#include <iostream>
using namespace std;

int main() 
{
    int n; cin>>n;
    bool flag = true;
    for(int i = 1; i<=n; i++){
      if((i * (i + 1)) / 2 == n) {
        cout<<"YES"<<endl;
        flag = false;
        break;
      }
    }
    if(flag) cout<<"NO"<<endl;
    return 0;
}
