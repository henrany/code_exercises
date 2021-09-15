#include<bits/stdc++.h>
#define ll long long

int main(){
    int n = 0;
    scanf("%d", &n);
    while(n--){
        ll a=0, b=0;
        scanf("%lld %lld", &a, &b);
        if(a == b) printf("=\n");
        else if(a > b) printf(">\n");
        else printf("<\n");
    }
}