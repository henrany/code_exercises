#include<iostream>

int main(){
    int n;
    while(n>0){
        std::cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i<j){
                    std::cout<<i<<" ";
                }
                else{
                    std::cout<<j<<" ";
                }
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }
    return 0;
}