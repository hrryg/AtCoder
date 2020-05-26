#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N;
    cin >> N;
    int t=0;
    set<string> s;
    rep(i,N){
        int num;
        cin >> num;
        if(0<num&&num<400){
            s.insert("gray");
        }else if(400<=num&&num<800){
            s.insert("brown");
        }else if(800<=num&&num<1200){
            s.insert("green");
        }else if(1200<=num&&num<1600){
            s.insert("cyan");
        }else if(1600<=num&&num<2000){
            s.insert("blue");
        }else if(2000<=num&&num<2400){
            s.insert("yellow");
        }else if(2400<=num&&num<2800){
            s.insert("orange");
        }else if(2800<=num&&num<3200){
            s.insert("red");
        }else{
            ++t;
        }
    }
    int m = s.size();
    cout << max(m,1) << " " << s.size()+t << endl;
}