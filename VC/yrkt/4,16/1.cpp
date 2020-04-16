#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  set<char> s;
  rep(i,N){
    char c;
    cin >> c;
    if(!s.count(c)){
      s.insert(c);
    }
  }
  if(s.count('Y')){
    cout << "Four" << endl;
  }else{
    cout << "Three" << endl;
  }
}
