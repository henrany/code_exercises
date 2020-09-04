#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t--){
        ll a=0,b=0;
        cin>>a>>b;
        ll d = abs(a - b);
        if(d % 10 == 0){
            cout<<d/10<<"\n";
        }
        else{
            cout<<d/10 + 1<<"\n";
        }
        
    }
}