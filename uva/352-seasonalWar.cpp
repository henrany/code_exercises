#include <bits/stdc++.h>

using namespace std;
int n;
char map1[30][30], used[30][30];
bool valid(int i,int j){return i>=0 && i< n && j>=0 && j< n;}
void dfs(int x, int y){
    if (!valid(x,y)) return;
    if (used[x][y] != 0 || map1[x][y] == '0') return;
    used[x][y] = 1;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            dfs(x + i, y + j);
}

int main(){
    int img = 0, i, j;
    while (scanf("%d", &n) == 1){
        for (i = 0; i < n; i++){
            scanf("%s", map1[i]);
        }
        memset(used, 0, sizeof(used));
        int cnt = 0;
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (map1[i][j] == '1' && used[i][j] == 0){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", ++img, cnt);
    }
    return 0;
}