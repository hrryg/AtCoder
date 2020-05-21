#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    string S;
    cin >> S;
    ll t=0,cnt=0;
    for(ll i=0;i<S.size();++i){
        if(S.at(i)=='W'){
            cnt += i-t;
            ++t;
        }
    }
    cout << cnt << endl;
}