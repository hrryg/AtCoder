#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,cnt = 1;
  bool b = 1;
  cin >> s;
  set<int> t;
  t.insert(s);
  while(b){
    ++cnt;
    if(s%2){
      s = s * 3 + 1;
    }else{
      s = s / 2;
    }
    if(t.count(s)){
      b = 0;
    }else{
      t.insert(s);
    }
  }
  cout << cnt << endl;
}
