#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a;
    int n,x,y,m,v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v;
        a.push_back(v);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if(x-1 != 0){
        a[x-1-1] = a[x-1-1] + (y - 1);
        }
        if(x-1!= n-1 ){
        a[x-1+1] = a[x-1+1] + (a[x-1] - y);
        }
        a[x-1] = 0;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}