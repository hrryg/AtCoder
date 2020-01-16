#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  string S;
  cin >> N >> K >> S;

  if(S.at(K-1)=='A')
  S.at(K-1) = 'a';
  else if(S.at(K-1)=='B')
  S.at(K-1) = 'b';
  else if(S.at(K-1)=='C')
  S.at(K-1) = 'c';

  cout << S << endl;
}
