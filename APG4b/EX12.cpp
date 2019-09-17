#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int size = S.size();
  int sum = 1;
  for(int i = 1; i < size; i++){
    if(S.at(i) == '+'){
      sum++;
      i++;
    }
  if(S.at(i) == '-'){
      sum--;
      i++;
    }
  }
  cout << sum << endl;
}
