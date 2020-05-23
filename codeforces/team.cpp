#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    int n,c=0;
   int v[1000][3];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int c1=0;
        for(int j=0;j<3;j++){
            if(v[i][j] == 1){
                c1++;
            }
        }
        if(c1>=2){
            c++;
        }
    }
    cout<<c<<"\n";

    return 0;
}