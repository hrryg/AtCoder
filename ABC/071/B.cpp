#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  bool b = 1;
  cin >> S;
  set<char> c;
  for(int i=0;i<S.size();++i){
    if(!c.count(S.at(i))){
      c.insert(S.at(i));
    }
  }
  char t = 'a';
  for(int i=0;i<26;++i){
    if(!c.count(t)){
      cout << t << endl;
      b = 0;
      break;
    }else{
      t += 1;
    }
  }
  if(b){
    cout << "None" << endl;
  }
}
