#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,h,a,sum=0;
    cin>>n>>h;
    while(n--){
        cin>>a;
        (a<=h)?sum+=1:sum+=2;
    }
    cout<<sum<<"\n";
    return 0;
}