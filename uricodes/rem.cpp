#include<iostream>
#include<cmath>

int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<10000;i++){
        if(i%n==2){
            std::cout<<i;
            std::cout<<std::endl;
        }
    }
    return 0;
}