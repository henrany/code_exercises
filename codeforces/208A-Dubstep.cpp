#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s2="WUB",s3="";
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++){
        s3+=s[i];
        s3+=s[i+1];
        s3+=s[i+2];
        if(s3 == s2){
            i=i+2;
            s3="";
            if(c > 0){
                cout<<" ";
                c=0;
            }
        }
        else{
            cout<<s[i];
            c++;
            s3="";
        }
    }
    cout<<"\n";
}