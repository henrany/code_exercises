#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v{0,0,0};
    vector<pair<int,int>> p;
    int n,t,pos1=0,pos2=0,pos3=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t == 1){
            v[0]++;
        }
        else if(t == 2){
            v[1]++;
        }
        else{
            v[2]++;
        }
        p.push_back(make_pair(t,i));
    }
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++){
        if(p[i].first == 2){
            pos2 = i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(p[i].first == 3){
            pos3 = i;
            break;
        }
    }
    if(v[0] == 0){
        cout<<0<<"\n";
    }
    else{
        cout<<v[0]<<"\n";
        for(int i=0;i<v[0];i++){
            cout<<p[pos1].second+1<<" "<<p[pos2].second+1<<" "<<p[pos3].second+1<<"\n";
            pos1++;
            pos2++;
            pos3++;
        }
    }
}