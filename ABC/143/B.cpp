#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> tako(N);

  for(int i = 0; i < N; i++)
  cin >> tako.at(i);

  int sum = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(N > i + j + 1)
      sum += tako.at(i) * tako.at(i + j + 1);
    }
  }
  cout << sum << endl;
}
