#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b){
        printf("%d", c);
    } else if (b==c){
        printf("%d", a);
    } else {
        printf("%d", b);
    }
}