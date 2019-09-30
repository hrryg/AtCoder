#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  int tap = 0;
  int dengen = 1;
  while(dengen < B){
    dengen += A;
    dengen--;
    tap++;
  }
  cout << tap << endl;
}
