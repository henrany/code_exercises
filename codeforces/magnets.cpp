#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> v;
    string s;
    int n,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }

    for(int i=0;i<n;i++){
        if(v[i] != v[i+1]){
            c++;
        }
    }
    cout<<c<<"\n";
}