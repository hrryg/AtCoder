#include <bits/stdc++.h>
using namespace std;

int main(){
  int X,happy=0;
  cin >> X;
  happy += (X/500) * 1000;
  X -= (X/500)*500;
  happy += (X/5) * 5;
  cout << happy << endl;
}
