#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  for(int i = 0; i < N; i++){
    char op;
    int B;
    cin >> op >> B;
    if(op=='+')
    A = A + B;
    if(op=='-')
    A = A - B;
    if(op=='*')
    A = A * B;
    if(op=='/'){
      if(B==0){
      cout << "error" << endl;
      break;
    }
    A = A / B;
    }
    cout << i + 1 << ":" << A << endl;
  }
  return 0;
}
