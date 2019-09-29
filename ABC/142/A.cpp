#include <bits/stdc++.h>
using namespace std;

int main(){
  double num;
  double num2 = 0;
  cin >> num;
  for(int i = 1; i <= num; i++){
    if(i%2 != 0)
    num2++;
  }
  cout << num2 / num <<endl;
}
