#include <bits/stdc++.h>

int main(){
    double h = 0, u = 0, d = 0, f = 0;
    while (scanf("%lf%lf%lf%lf", &h, &u, &d, &f) && h != 0){
        int index = 0;
        double dist = 0;
        double fatigue = u * f/100;
        while (true){
            dist += u;
            if(u > 0) u -= fatigue;
            if(dist > h){
                index++;
                printf("success on day %d\n",index);
                break;
            }
            dist -= d;
            if(dist < 0){
                index++;
                printf("failure on day %d\n", index);
                break;
            }
            index++;
        }
    }
}