#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
    int K;
    string S;
    cin >> K >> S;
    if(S.size()<=K){
        cout << S << endl;
    }else{
        for(int i=0;i<K;++i){
            cout << S.at(i);
        }
        cout << "..." << endl;
    }
}