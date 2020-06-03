#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<char> v{'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    unordered_set<char> s;
    int n,k,c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cout<<v[c];
        c++;
        if(c == k){
            c = 0;
        }
    }
    cout<<"\n";
}