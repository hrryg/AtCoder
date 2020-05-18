#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
const double pie = 3.14159265358979;

int main(){
    double A,B,H,M;
    cin >> A >> B >> H >> M;
    double a = H*30+M*0.5;
    double b = M*6;
    double c = abs(a-b);
    if(c==90){
        cout << sqrt(A*A+B*B) << endl;
    }
    else{
        cout << setprecision(100) << sqrt(A*A+B*B-2*A*B*cos(c*pie/180)) << endl;
    }
}