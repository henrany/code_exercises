#include<bits/stdc++.h>
//9A

using namespace std;

int main(){
    vector<string> v{"1/6","1/3","1/2","2/3","5/6","1/1"};
    int y,w,s=0;
    cin>>y>>w;
    s= max(y,w);
    cout<<v[6-s]<<"\n";
    return 0;
}