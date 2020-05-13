#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,a,b,c,asum=0,bsum=0,csum=0;
    cin>>n;
    int sum1=0;
    while(n--){
        cin>>a>>b>>c;
        asum+=a;
        bsum+=b;
        csum+=c;
    }

    cout<<(asum==0&&bsum==0&&csum==0?"YES":"NO")<<"\n";
    return 0;
}