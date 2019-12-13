#include<iostream>
#include<cmath>

int main(){
    int vec[1000],n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            std::cout<<i;
            std::cout<<std::endl;
        }
    }
    return 0;
}