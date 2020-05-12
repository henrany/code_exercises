#include<iostream>

using namespace std;

int main(){
    int vec[7];
    int n,sum=0;
    int count=0;
    bool broke = false;
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>vec[i];
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<7;j++){
            sum+=vec[j];
            count++;
            if(sum>=n){
                broke = true;
                break;
            }
            else{
                continue;
            }
        }
        if(broke){
            break;
        }
        else{
            count=0;
        }
    }
    cout<<count<<endl;
    return 0;
}