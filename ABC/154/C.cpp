#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,num;
  cin >> N;
  bool B = true;
  vector<int> A(N);

  for(i=0;i<N;i++)
  cin >> A.at(i);

  sort(A.begin(),A.end());

  num = A.at(0);

  for(i=1;i<N;i++){
    if(num==A.at(i)){
      B = false;
      break;
    }else if(num!=A.at(i))
    num = A.at(i);
  }
  if(B)
  cout << "YES";
  else
  cout << "NO";
}
