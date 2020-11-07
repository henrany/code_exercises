#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a,pair<string, int> &b){
    return a.second < b.second;
}

void sort(map<string, int> &M){
    vector<pair<string, int>> A;
    for (auto &it : M){
        A.push_back(it);
    }

    sort(A.rbegin(), A.rend(), cmp);
    cout<<A[0].first<<"\n";
}

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        m[a]++;
    }
    sort(m);
}