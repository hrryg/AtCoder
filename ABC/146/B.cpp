#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,j;
  string S;
  cin >> N >> S;

  for(i=0;i<S.size();i++){
    for(j=0;j<N;j++){
      if(S.at(i)=='Z')
      S.at(i) = 'A';
      else
      S.at(i)++;
    }
  }
  cout << S << endl;
}
