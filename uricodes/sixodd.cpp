#include<iostream>
#include<cmath>

int main(){
    int vec[1000],n,count=0;
    std::cin>>n;
    for(int i=n;i<n*n;i++){
        if(i%2!=0){
            count++;
            std::cout<<i;
            std::cout<<std::endl;
            if(count == 6){
                break;
            }
        }
    }
    return 0;
}