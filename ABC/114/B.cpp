#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int num = 1e9+7;
  cin >> S;
  for(int i=0;i<S.size()-2;++i){
    string c = "";
    for(int j=i;j<i+3;++j){
      c += S.at(j);
    }
    num = min(num,abs(753-stoi(c)));
  }
  cout << num << endl;
}
