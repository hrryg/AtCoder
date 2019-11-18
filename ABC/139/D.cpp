#include <bits/stdc++.h>
using namespace std;

int main(){
  long N,sum=0;
  cin >> N;
  for(long i = 1; i < N; i++)
  sum += i;
  cout << sum << endl;
}
