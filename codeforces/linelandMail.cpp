#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,a;
    cin>>n;
    vector<ll>v;
    while(n--){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        ll m=0,ma=0;
        if(i==0){
            m = abs(v[i] - v[i+1]);
            ma = abs(v[v.size()-1] - v[i]);
        }
        else if(i==v.size() - 1){
            m = abs(v[i] - v[i-1]);
            ma = abs(v[i] - v[0]);
        }
        else{
            m = min(abs(v[i] - v[i-1]), abs(v[i] - v[i+1]));
            ma = max(abs(v[i] - v[0]), abs(v[i] - v[v.size() - 1]));
        }
        cout<<m<<" "<<ma<<"\n";
    }
}