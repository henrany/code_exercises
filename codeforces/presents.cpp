#include<bits/stdc++.h>

using namespace std;

int main(){
   int n,a;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>a;
        v[a] = i;
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}