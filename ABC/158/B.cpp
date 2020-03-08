#include <bits/stdc++.h>
using namespace std;

int main(){
  long N,A,B,i,sum=0,cnt=0;
  cin >> N >> A >> B;
  cnt += (N/(A+B))*A;
  if(N%(A+B)>A)
    cnt += A;
  else
    cnt += N%(A+B);
  cout << cnt;
}
