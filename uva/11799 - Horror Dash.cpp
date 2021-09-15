#include<bits/stdc++.h>

int main(){
    int t = 0;
    scanf("%d", &t);
    int i=1;
    while (t--){
        int n=0;
        scanf("%d", &n);
        int mx = 0;
        while (n--){
            int a;
            scanf("%d",&a);
            if(a > mx) mx = a;
        }
        printf("Case %d: %d\n", i++, mx);
    }
    
}