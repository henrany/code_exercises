#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,s1;
    cin>>s>>s1;
    if(s.size() == s1.size()){
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == s1[i]){
                c++;
            }
        }
        if(c==s.size()) cout<<-1<<"\n";
        else cout<<s.size()<<"\n";
    }
    else if(s1[0] == s[s.size() - 1]){
       cout<<(s.size() > s1.size() ? s.size():s1.size())<<"\n";
    }
    else if(s1[0] == s[0]){
        cout<<(s.size()>s1.size()?s.size():s1.size())<<"\n";
    }
    else{
        cout<<(s.size() > s1.size()?s.size():s1.size())<<"\n";
    } 
}