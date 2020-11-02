#include <bits/stdc++.h>
using namespace std;

int dr[4] = {1, -1, 0, 0};
int dc[4] = {0, 0, 1, -1};
char grid[101][101];
int n;
bool valid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < n; }

void fill(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
}

void dfs(int s, int e){
    if (!valid(s, e)) return;
    if (grid[s][e] == '.') return;
    grid[s][e] ='.';
    for (int i = 0; i < 4; i++){
        int r = s + dr[i];
        int co = e + dc[i];
        dfs(r, co);
    }
}

int main(){
    int test;
    cin >> test;
    int i = 1;
    while (test--){
        int c = 0;
        cin >> n;
        fill(n);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 'x'){
                    c++;
                    dfs(i, j);
                }
            }
        }
        cout << "Case " << i << ": " << c << "\n";
        i++;
    }
}