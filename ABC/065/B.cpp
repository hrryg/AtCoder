#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i,N){
        cin >> a.at(i);
    }
    bool b = 0;
    int t = 1;
    int cnt = 0;
    while(cnt<=N){
        t = a.at(t-1);
        ++cnt;
        if(t==2){
            b = 1;break;
        }
    }
    if(b){
        cout << cnt << endl;
    }else{
        cout << "-1" << endl;
    }
}