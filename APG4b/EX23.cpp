#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int,int> A;
  for(int i = 0; i < N; i++){
    int x;
    cin >> x;
    if(A.count(x))
    A.at(x)++;
    else{
      A[x] = 1;
    }
  }
  int maxA = 0;
  int answer = 0;
  for(auto x : A){
    if(maxA < x.second){
      maxA = x.second;
      answer = x.first;
    }
  }
  cout << answer << " " << maxA << endl;
}
