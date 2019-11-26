#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,j;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);

  for(i=0;i<N;i++){
    cin >> A.at(i);
    B.at(i) = A.at(i);
  }
  sort(B.begin(),B.end());
  int maxnum = B.at(N-1);
  int maxnum2 = B.at(N-2);
  for(i=0;i<N;i++){
    if(A.at(i)==maxnum)
    cout << maxnum2 << endl;
    else
    cout << maxnum << endl;
  }
}
