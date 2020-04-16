#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,cnt=0;
  cin >> A >> B;
  for(int i=A;i<=B;++i){
    string s = to_string(i);
    if(s.at(0)==s.at(4)&&s.at(1)==s.at(3)){
      ++cnt;
    }
  }
  cout << cnt << endl;
}
