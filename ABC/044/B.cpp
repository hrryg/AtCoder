#include <bits/stdc++.h>
using namespace std;

int main(){
  string w;
  cin >> w;
  sort(w.begin(),w.end());
  if(w.size()%2){
    cout << "No" << endl;
  }else{
    bool b = 1;
    for(int i=0;i<w.size();i+=2){
      if(w.at(i)!=w.at(i+1)){
        cout << "No" << endl;
        b = 0;
        break;
      }
    }
    if(b){
      cout << "Yes" << endl;
    }
  }
}
