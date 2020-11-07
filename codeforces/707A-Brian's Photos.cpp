#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    bool no = false;
    char a;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a;
            if(a == 'C' || a == 'M' || a == 'Y'){
                no = true;
                break;
            }
        }
    }
    cout<<(no?"#Color":"#Black&White")<<"\n";
}