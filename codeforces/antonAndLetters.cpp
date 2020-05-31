#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    unordered_set<char> c;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i] != '{' && s[i] != ',' && s[i] != '}' && s[i] != ' '){
            c.insert(s[i]);
        }
    }
    cout<<c.size()<<"\n";
}