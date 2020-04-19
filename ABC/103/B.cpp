#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,T;
  int cnt = 0;
  bool b = 0;
  cin >> S >> T;
  for(int i=0;i<S.size();++i){
    string C = "";
    for(int j=i;j<T.size();++j){
      C.push_back(T.at(j));
    }
    T.push_back(T.at(i));
    if(S==C){
      b = 1; break;
    }
  }
  if(b){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
