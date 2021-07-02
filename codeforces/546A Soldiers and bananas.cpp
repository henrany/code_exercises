#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll k=0, n=0,w=0,ans=0;
    cin>>k>>n>>w;
    ans = ((w*(w+1))/2)*k;
    cout<<((ans - n) > 0? ans-n: 0)<<"\n";
}