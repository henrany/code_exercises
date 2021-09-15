#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int k = 0;
    scanf("%d", &k);
    int i = 1;
    while(k--){
        vector<int> v{0,0,0};
        scanf("%d%d%d", &v[0], &v[1], &v[2]);
        sort(v.begin(), v.end());
        printf("Case %d: %d\n", i++, v[1]);
    }
}