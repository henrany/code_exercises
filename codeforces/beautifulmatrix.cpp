#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(){
    int arr[6][6];
    int pos1=0,min=0,pos2=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(arr[i][j] == 1){
                min = abs(i-3) + abs(j-3);
            }
        }
    }
    cout<<min<<"\n";
    return 0;
}