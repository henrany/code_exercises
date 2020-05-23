#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c=0,c1=0;
    cin>>n;
    string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            c++;
        }
        else{
            c1++;
        }
    }
    if(c==c1){
        cout<<"Friendship"<<"\n";
    }
    else{
        cout<<(c>c1?"Anton":"Danik")<<"\n";
    }
}