#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,a,c=0,c1=0,b=0;
    cin>>n;
    vector<int> v;
    while(n--){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        if(v[i] == 1){
            b++;
        }
    }
    if(b == v.size()){
        cout<<b<<"\n";
        exit(0);
    }
    ll pos =0;
    for(int i=v.size()-1;~i;i--){
        if(v[i] == 0){
            pos = i;
            break;
        }
    }
    for(int i=pos;i<v.size();i++){
        c1++;
    }
    c1 = c1-1;
    c = max(c,c1);
    for(int i=0;i<v.size();i++){
        (v[i] == 1)?c1++:c1=0;
        c = max(c,c1);
    }
    cout<<c<<"\n";
}