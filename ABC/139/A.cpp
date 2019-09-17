#include <bits/stdc++.h>
using namespace std;

int main() {
  string S,T;
  int i = 0;
  cin >> S >> T;
  for(int j = 0; j < 3; j++){
    if(S.at(j) == T.at(j))
      i++;
  }
  cout << i;
}
