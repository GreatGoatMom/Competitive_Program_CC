#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i= (a); i<(b); i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(), (obj).end()
using namespace std;

const long long INF = 1LL << 60;
const int MOD = (int)1e9 + 7;
typedef long long ll;

signed main () {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        REP(i,b){
            printf("%d",a);
        }
    } else {
        REP(i,a){
            printf("%d",b);
        }
    }
}