#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<< ( n%m==0?"Yes":"No")<<"\n";
    }
    return 0;
}