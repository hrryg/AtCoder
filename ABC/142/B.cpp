#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  int noreru = 0;
  cin >> N >> K;
  vector<int> nakama(N);
  for(int i = 0; i < N; i++){
    cin >> nakama.at(i);
    if(nakama.at(i) >= K){
      noreru++;
    }
  }
  cout << noreru << endl;
}
