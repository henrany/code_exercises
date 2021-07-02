#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n=0,k=0;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10 == 0) n = n/10;
        else n--;
    }
    cout<<n<<"\n";
}