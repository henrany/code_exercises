#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> v,s;
        int a,c=0;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            if(i != n-1){
                s.push_back(abs(v[i] - v[i+1]));
            }
        }
        sort(s.begin(),s.end());
        for(int i=1;i<n;i++){
            if(s[i-1] == i){
                c++;
            }
        }
        cout<<(c==n-1?"Jolly":"Not jolly")<<"\n";
        v.clear();
        s.clear();
    }
}