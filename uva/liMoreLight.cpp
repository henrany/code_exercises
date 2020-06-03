#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    while(cin>>n && n!=0){
        ll s = sqrt(n);
        cout<<(s*s == n? "yes":"no")<<"\n";
    }
}