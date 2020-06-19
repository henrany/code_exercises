#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll a[101];
    memset(a,0,sizeof(a));
    ll n,s=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    for(int i=0;i<n;i++){
        ll s1=0;
        s+=a[i];
        for(int j=i+1;j<n;j++){
            s1+=a[j];
        }

        if(s > s1){
            cout<<i+1<<"\n";
            exit(0);
        }
    }
}