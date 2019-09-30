#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,Q,K;
  cin >> N >> K >> Q;
  vector<int> qPoint(N,K);
  for(int i = 0; i < Q; i++){
    int qAnswer;
    cin >> qAnswer;
    qPoint.at(qAnswer - 1)++;
  }
  for(int i = 0; i < N; i++)
  qPoint.at(i) -= Q;
  for(int i = 0; i < N; i++){
    if(qPoint.at(i) <= 0)
    cout << "No" << endl;
    else
    cout << "Yes" << endl;
  }
}
