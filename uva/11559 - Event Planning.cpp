#include <bits/stdc++.h>
using namespace std;
int main(){
    int pa = 0, bu = 0, h = 0, w = 0;
    while (scanf("%d%d%d%d", &pa, &bu, &h, &w) != EOF){
        int minPrice = 1000000;
        for (int i = 0; i < h; i++){
            int price = 0;
            scanf("%d", &price);
            int maxbeds = 0;
            for (int j = 0; j < w; j++){
                int a = 0;
                scanf("%d", &a);
                if (a > maxbeds) maxbeds = a;
            }
            if (maxbeds >= pa){
                int value = price * pa;
                if (value < minPrice) minPrice = value;
            }
        }
        if (minPrice <= bu) printf("%d\n", minPrice);
        else printf("stay home\n");
    }
}