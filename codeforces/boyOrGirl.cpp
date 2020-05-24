#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    unordered_set<char> s1;
    cin>>s;
    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
    }
    cout<<(s1.size()%2!=0?"IGNORE HIM!":"CHAT WITH HER!")<<"\n";
}