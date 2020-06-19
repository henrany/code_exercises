#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    vector<ll> v;
    ll n,a,c=0;
    cin>>n;
    while(n--){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll b = v[0];
    ll d = v[v.size() - 1];
    for(int i=0;i<v.size();i++){
        if(v[i] > b && v[i] < d){
            c++;
        }
    }
    cout<<c<<"\n";
}