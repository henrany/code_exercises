#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,m=0,c=0;
    int seq= 1;
    while (scanf("%d%d%d", &n,&m,&c) && (n !=0 && m!= 0 && c != 0)){
        vector<int> v;
        map<int, int> mp;
        bool blown = 0;
        int counter = 0, maxpower = 0;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d", &a);
            v.push_back(a);
            mp[i] = 0;
        }
        for(int i=0;i<m;i++){
            int a;
            scanf("%d", &a);
            if(mp[a-1] == 0){
                counter += v[a-1];
                if(counter > maxpower) maxpower = counter;
                if(counter > c){
                    blown = true;
                }
                mp[a-1] = 1;
            }
            else{
                counter -= v[a-1];
                mp[a-1] = 0;
            }
        }
        printf("Sequence %d\n", seq++);
        if(blown) printf("Fuse was blown.\n");
        else{
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n", maxpower);
        }
        printf("\n");
    }
    return 0;
}