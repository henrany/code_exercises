#include<bits/stdc++.h>
//228A
using namespace std;

int main(){
   unordered_set<int> v;
   int s,s1,s2,s3;
   cin>>s>>s1>>s2>>s3;
   v.insert(s);
   v.insert(s1);
   v.insert(s2);
   v.insert(s3);
   cout<<4-v.size()<<"\n";
   return 0;
}