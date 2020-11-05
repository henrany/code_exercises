#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    unordered_set<int> s;
    int n,p,p1;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cin>>p1;
    for(int i=0;i<p1;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<(s.size()==n?"I become the guy.":"Oh, my keyboard!")<<"\n";
    return 0;
}