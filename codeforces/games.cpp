#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,h,a,c=0;
    vector<pair<int, int>> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h>>a;
       v.push_back(make_pair(h,a));
    }

    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i].first == v[j].second){
                c++;
            }
        }

        for(int j=i;j<v.size();j++){
            if(v[i].second == v[j].first){
                c++;
            }
        }
    }
    cout<<c<<"\n";
}