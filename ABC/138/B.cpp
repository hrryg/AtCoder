#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<double> A(N);
  for(int i = 0; i < N; i++){
    double x;
    cin >> x;
    A.at(i) = 1 / x;
  }
  double sum = 0;
  for(int i = 0; i < N; i++){
    sum += A.at(i);
  }
  cout << sum << endl;
}
