#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> test(N);
  for(int i = 0; i < N; i++){
    cin >> test.at(i);
  }
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += test.at(i);
  }
  sum /= N;
  for(int i = 0; i < N; i++){
    if(sum > test.at(i)){
    cout << sum - test.at(i) <<endl;
  }
  else{
    cout << test.at(i) - sum << endl;
  }
  }

}
