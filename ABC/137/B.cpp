#include <bits/stdc++.h>
using namespace std;

int main(){
  int K,X;
  cin >> K >> X;

  if(K == 1)
  cout << X << endl;
  else{
    for(int i = K - 1; i > 0; i--)
    cout << X - i << " ";
    cout << X << " ";
    for(int i = 1; i < K; i++)
    cout << X + i << " ";
  }
}
