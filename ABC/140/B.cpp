#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int tManzoku = 0;
  cin >> N;
  vector<int> Ryouri(N);
  vector<int> Manzoku(N);
  vector<int> mBonus(N-1);
  for(int i = 0; i < N; i++)
  cin >> Ryouri.at(i);
  for(int i = 0; i < N; i++)
  cin >> Manzoku.at(i);
  for(int i = 0; i < N-1; i++)
  cin >> mBonus.at(i);
  for(int i = 0; i < N; i++){
    tManzoku += Manzoku.at(Ryouri.at(i)-1);
    if(i != 0 && Ryouri.at(i - 1) + 1 == Ryouri.at(i))
    tManzoku += mBonus.at(Ryouri.at(i - 1) - 1);
  }
  cout << tManzoku << endl;
}
