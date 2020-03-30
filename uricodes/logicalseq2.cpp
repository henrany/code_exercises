#include<iostream>

int main(){
    int x,y;
    std::cin>>x>>y;
    int n=1;
    for(int i=1;i<=y;i++){
        if(n==x){
            std::cout<<i<<std::endl;
            n=1;
        }
        else{
            std::cout<<i<<" ";
            n++;
        }
    }
    return 0;
}