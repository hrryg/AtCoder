#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N - 1);
  for(int i = 0; i < N - 1; i++)
  cin >> B.at(i);
  for(int i = 0; i < N; i++){
    if(i == 0)
    A.at(i) = B.at(i);
    else if(i == N - 1)
    A.at(i) = B.at(i - 1);
    else{
      if(B.at(i) < B.at(i - 1))
      A.at(i) = B.at(i);
      else
      A.at(i) = B.at(i - 1);
    }
  }
  int sum = 0;
  for(int i = 0; i < N; i++)
  sum += A.at(i);
  cout << sum << endl;
}
