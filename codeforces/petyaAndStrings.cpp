#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,s1;
    int c=0;
    cin>>s>>s1;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);

    if(s.compare(s1) < 0){
        cout<<-1<<"\n";
    }
    else if(s.compare(s1) > 0){
        cout<<1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    
}