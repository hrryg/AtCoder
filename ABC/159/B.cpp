#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,C,T;
  cin >> S;

  for(int i=0;i<S.size()/2;++i)
    C.push_back(S.at(i));
  reverse(S.begin(),S.end());
  for(int i=0;i<S.size()/2;++i)
    T.push_back(S.at(i));
  reverse(T.begin(),T.end());
  if(C==T){
    reverse(C.begin(),C.end());
    if(C==T){
      cout  << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  else{
    cout << "No" << endl;
  }
}
