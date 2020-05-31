#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n,b,d,a,c=0,s=0;
    cin>>n>>b>>d;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++){
        if(v[i] <= b){
            s+=v[i];
            if(s > d){
                c++;
                s=0;
            }
        }
    }
    cout<<c<<"\n";
}