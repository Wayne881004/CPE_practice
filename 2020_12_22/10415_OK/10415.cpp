#include<iostream>
#include<cstring>
#include<map>
#include<vector>
using namespace std;


int Kase, len, cnt[11];
int status[11];
string str;
map <char, vector<int> > mp;

int main(int argc, char const *argv[]){
    #ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    #endif

    // finger 0~10
    mp['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};


    scanf("%d", &Kase);
    getline(cin, str);
    while(Kase--){
        getline(cin, str); // empty
        len = str.size();
        memset(status, 0, sizeof(status));
        memset(cnt, 0, sizeof(cnt));
        for(int i = 0; i < len; i++){
            for(int j = 1; j <= 10; j++){
                if(mp[str[i]][j]){
                    if(status[j]){
                        continue;
                    }
                    else{
                        cnt[j]++;
                        status[j] = 1;
                    }
                }
                else{
                    status[j] = 0;
                }
            }
        }
        for(int i = 1; i <= 10; i++){
            printf("%d",cnt[i]);
            if(i != 10) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
