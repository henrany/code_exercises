#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll v[3], s=0;;
        memset(v,0,sizeof(v));
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        sort(v,v+3);
        s = v[0] + v[1];
        if(v[0] == v[1] && v[1] == v[2]) cout<<"YES\n";
        else if(v[2] - s < 2) cout<<"YES\n";
        else if(s > v[2] && v[1] - v[0] < 2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}