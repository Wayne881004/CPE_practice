#include<iostream>
using namespace std;


int Kase, e, f, c, ans=0, total;
int gcd(int a, int c){
    if(a < c) return ans;
    else{
        ans += a/c;
        return gcd((a%c + a/c),c);
    }
}

int main(int argc, char const *argv[]){
    #ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif
    scanf("%d",&Kase);
    for(int i = 0; i < Kase; i++){
        ans = 0;
        scanf("%d %d %d",&e,&f,&c);
        total = e + f;
        printf("%d\n",gcd(total,c));
    }

    return 0;
}
