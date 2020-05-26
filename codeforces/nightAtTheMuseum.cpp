#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<char> v{'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    int sum=0,pos=0,st=0,w=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<v.size();j++){
            if(s[i] == v[j]){
                pos = j;
            }
        }
        w = abs(st-pos);
        if(w < 13){
            sum+=w;
        }
        else{
            sum+= (26 - w);
        }
        st = pos;
    }
    cout<<sum<<"\n";
}