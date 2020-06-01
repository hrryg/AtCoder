#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N,K,R,S,P;
    string T;
    cin >> N >> K >> R >> S >> P >> T;
    vector<char> re;
    ll cnt=0;
    rep(i,N){
        char c;
        c = T.at(i);
        if(i<K){
            if(c=='r'){
                cnt+=P;
                re.push_back('p');
            }else if(c=='s'){
                cnt+=R;
                re.push_back('r');
            }else{
                cnt+=S;
                re.push_back('s');
            }
        }else if(i>N-K-1){
            char k = re.at(i-K);
            if(c=='r'){
                if(k!='p'){
                    cnt += P;
                }
            }else if(c=='s'){
                if(k!='r'){
                    cnt += R;
                }
            }else{
                if(k!='s'){
                    cnt += S;
                }
            }
        }else{
            char k = re.at(i-K);
            if(c=='r'){
                if(k!='p'){
                    cnt+=P;
                    re.push_back('p');
                }else{
                    if(T.at(i+K)=='r'||T.at(i+K)=='s'){
                        re.push_back('s');
                    }else{
                        re.push_back('r');
                    }
                }
            }else if(c=='s'){
                if(k!='r'){
                    cnt+=R;
                    re.push_back('r');
                }else{
                    if(T.at(i+K)=='s'||T.at(i+K)=='p'){
                        re.push_back('p');
                    }else{
                        re.push_back('s');
                    }
                }
            }else{
                if(k!='s'){
                    cnt+=S;
                    re.push_back('s');
                }else{
                    if(T.at(i+K)=='r'||T.at(i+K)=='p'){
                        re.push_back('r');
                    }else{
                        re.push_back('p');
                    }
                }
            }
        }
    }
    cout << cnt;
}