#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i;
  cin >> N;
  vector<int> students(N);
  vector<int> toukou(N);

  for(i=0;i<N;i++)
  cin >> students.at(i);
  for(i=0;i<N;i++)
  toukou.at(students.at(i)-1) = i+1;
  for(i=0;i<N;i++)
  cout << toukou.at(i) << " ";
}
