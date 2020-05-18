#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    string S;
    cin >> S;
    vector<int> g(S.size()+1);
    g.at(0) = 0;
    g.at(1) = 1;
    if(S.size()<2){
        cout << 1 << endl;
        return 0;
    }
    if(S.at(0)==S.at(1)){
        g.at(2) = 1;
    }else{
        g.at(2) = 2;
    }
    for(int i=3;i<=S.size();++i){
        if(S.at(i-2)==S.at(i-1)){
            g.at(i) = g.at(i-3)+2;
        }else{
            g.at(i) = g.at(i-1)+1;
        }
    }
    cout << g.at(S.size()) << endl;
}