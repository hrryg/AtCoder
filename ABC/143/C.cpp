#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<char> S(N);
  vector<char> Answer;

  for(int i = 0; i < N; i++)
  cin >> S.at(i);

  for(int i = 0; i < N; i++){
    if(i == 0)
    Answer.push_back(S.at(i));
    else if(i > 0){
      if(S.at(i) != S.at(i - 1))
        Answer.push_back(S.at(i));
    }
  }
  cout << Answer.size() << endl;
}
