#include<bits/stdc++.h>
//265A done
using namespace std;

int main(){
    string s,t;
    int c=0;
    cin>>s>>t;
    for(int i=0;i<t.size();i++){
        if(t[i] == s[c]){
            c++;
        }
    }
    cout<<c+1<<"\n";
}