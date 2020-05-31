#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,x,a,c=0;
    string s;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>s>>a;
        if(s == "+"){
            x+=a;
        }
        else{
            x-=a;
            if(x < 0){
                c++;
                x+=a;
            }
        }
    }
    cout<<x<<" "<<c<<"\n";
}