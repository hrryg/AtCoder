#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> Lower(N);
  for(int i = 0; i < N; i++)
  cin >> Lower.at(i);
  int sum = 0;
  int maxLower = 0;
  for(int i = 0; i < N - 1; i++){
    if(Lower.at(i) < Lower.at(i + 1))
    sum = 0;
    else{
      sum++;
      maxLower = max(maxLower,sum);
    }
  }
  cout << maxLower << endl;
}
