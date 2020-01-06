#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> AP(3);

  for(int i=0;i<3;i++)
  cin >> AP.at(i);

  sort(AP.begin(),AP.end());

  cout << AP.at(0)+AP.at(1) << endl;


}
