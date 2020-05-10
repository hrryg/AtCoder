#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;
  S.push_back(T.at(T.size()-1));
  if(S==T){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
